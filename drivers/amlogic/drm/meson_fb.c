// SPDX-License-Identifier: (GPL-2.0+ OR MIT)
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */

#include <drm/drm_atomic_helper.h>

#include "meson_fb.h"
#include "meson_vpu.h"

void am_meson_fb_destroy(struct drm_framebuffer *fb)
{
	struct am_meson_fb *meson_fb = to_am_meson_fb(fb);
	int i;

	for (i = 0; i < AM_MESON_GEM_OBJECT_NUM && meson_fb->bufp[i]; i++)
		drm_gem_object_put_unlocked(&meson_fb->bufp[i]->base);
	drm_framebuffer_cleanup(fb);
	if (meson_fb->logo && meson_fb->logo->alloc_flag)
		am_meson_free_logo_memory();
	DRM_DEBUG("meson_fb=0x%p,\n", meson_fb);
	kfree(meson_fb);
}

int am_meson_fb_create_handle(struct drm_framebuffer *fb,
			      struct drm_file *file_priv,
	     unsigned int *handle)
{
	struct am_meson_fb *meson_fb = to_am_meson_fb(fb);

	if (meson_fb->bufp[0])
		return drm_gem_handle_create(file_priv,
				     &meson_fb->bufp[0]->base, handle);
	else
		return -EFAULT;
}

struct drm_framebuffer_funcs am_meson_fb_funcs = {
	.create_handle = am_meson_fb_create_handle, //must for fbdev emulate
	.destroy = am_meson_fb_destroy,
};

struct drm_framebuffer *
am_meson_fb_alloc(struct drm_device *dev,
		  struct drm_mode_fb_cmd2 *mode_cmd,
		  struct drm_gem_object *obj)
{
	struct am_meson_fb *meson_fb;
	struct am_meson_gem_object *meson_gem;
	int ret = 0;

	meson_fb = kzalloc(sizeof(*meson_fb), GFP_KERNEL);
	if (!meson_fb)
		return ERR_PTR(-ENOMEM);

	if (obj) {
		meson_gem = container_of(obj, struct am_meson_gem_object, base);
		meson_fb->bufp[0] = meson_gem;
	} else {
		meson_fb->bufp[0] = NULL;
	}
	drm_helper_mode_fill_fb_struct(dev, &meson_fb->base, mode_cmd);

	ret = drm_framebuffer_init(dev, &meson_fb->base,
				   &am_meson_fb_funcs);
	if (ret) {
		dev_err(dev->dev, "Failed to initialize framebuffer: %d\n",
			ret);
		goto err_free_fb;
	}
	DRM_INFO("meson_fb[id:%d,ref:%d]=0x%p,meson_fb->bufp[0]=0x%p\n",
		 meson_fb->base.base.id,
		 kref_read(&meson_fb->base.base.refcount),
		 meson_fb, meson_fb->bufp[0]);

	return &meson_fb->base;

err_free_fb:
	kfree(meson_fb);
	return ERR_PTR(ret);
}

struct drm_framebuffer *am_meson_fb_create(struct drm_device *dev,
					   struct drm_file *file_priv,
				     const struct drm_mode_fb_cmd2 *mode_cmd)
{
	struct am_meson_fb *meson_fb = 0;
	struct drm_gem_object *obj = 0;
	struct am_meson_gem_object *meson_gem;
	int ret, i;

	meson_fb = kzalloc(sizeof(*meson_fb), GFP_KERNEL);
	if (!meson_fb)
		return ERR_PTR(-ENOMEM);

	/* support multi handle .*/
	for (i = 0; i < AM_MESON_GEM_OBJECT_NUM && mode_cmd->handles[i]; i++) {
		obj = drm_gem_object_lookup(file_priv, mode_cmd->handles[i]);
		if (!obj) {
			dev_err(dev->dev, "Failed to lookup GEM handle\n");
			kfree(meson_fb);
			return ERR_PTR(-ENOMEM);
		}
		meson_gem = container_of(obj, struct am_meson_gem_object, base);
		meson_fb->bufp[i] = meson_gem;
	}

	drm_helper_mode_fill_fb_struct(dev, &meson_fb->base, mode_cmd);

	ret = drm_framebuffer_init(dev, &meson_fb->base, &am_meson_fb_funcs);
	if (ret) {
		dev_err(dev->dev,
			"Failed to initialize framebuffer: %d\n",
			ret);
		drm_gem_object_put(obj);
		kfree(meson_fb);
		return ERR_PTR(ret);
	}
	DRM_DEBUG("meson_fb[id:%d,ref:%d]=0x%px,meson_fb->bufp[%d-0]=0x%p\n",
		  meson_fb->base.base.id,
		  kref_read(&meson_fb->base.base.refcount),
		  meson_fb, i, meson_fb->bufp[0]);

	return &meson_fb->base;
}

struct drm_framebuffer *
am_meson_drm_framebuffer_init(struct drm_device *dev,
			      struct drm_mode_fb_cmd2 *mode_cmd,
			      struct drm_gem_object *obj)
{
	struct drm_framebuffer *fb;

	fb = am_meson_fb_alloc(dev, mode_cmd, obj);
	if (IS_ERR(fb))
		return NULL;

	return fb;
}

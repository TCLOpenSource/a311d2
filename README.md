# a311d2
0. download an generic arm architecture toolchains
1. build kernel
cd kernel path
cd kernel

generate configs
make meson64_a64_R_defconfig ARCH=arm64
make dtbs ARCH=arm64

compile with prebuilts toolchains
make -jN ARCH=arm64 CROSS_COMPILE=${CROSS_COMPILE}

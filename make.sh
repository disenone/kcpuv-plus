#!/bin/sh
export GCC_CW_ASM_SYNTAX=NO
export GCC_ENABLE_PASCAL_STRINGS=NO
./third-party/gyp/gyp --depth=. --generator-output=build -f make kcpuv-plus.gyp
cd build
make BUILDTYPE=Release
make BUILDTYPE=Debug


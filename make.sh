#!/bin/sh
./third-party/gyp/gyp --depth=. --generator-output=build -f make kcpuv-plus.gyp
cd build
make BUILDTYPE=Release
make BUILDTYPE=Debug


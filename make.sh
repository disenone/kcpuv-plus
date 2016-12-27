git submodule update --init --recursive
./third-party/gyp/gyp --depth=. --generator-output=build -f make kcpuv-plus.gyp

git submodule update --init --recursive
./third-party/gyp/gyp --depth=. --generator-output=build --build=Release --build=Debug -f make kcpuv-plus.gyp

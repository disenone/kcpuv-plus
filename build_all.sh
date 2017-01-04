git submodule update --init --recursive
mkdir -p third-party/libuv/build/ && cp -r third-party/gyp third-party/libuv/build/

# build libuv
cd third-party/libuv
git checkout v1.10.1
./gyp_uv.py -f make
make -C out
BUILDTYPE=Release make -C out
./gyp_uv.py -f make -Duv_library=shared_library
make -C out
BUILDTYPE=Release make -C out
cp -f out/Debug/lib.target/libuv.so.1 out/Debug/libuv.so
cp -f out/Release/lib.target/libuv.so.1 out/Release/libuv.so
cd ../..

./make.sh


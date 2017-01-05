git submodule update --init --recursive

::build libuv
cd third-party\libuv
git checkout v1.10.1
start /b .\..\gyp\gyp.bat -I common.gypi --depth=. --generator-output=out --build=Release --build=Debug -Dhost_arch=x64 -Dtarget_arch=x64 -Duv_library=static_library -f msvs uv.gyp
sleep 60
start /b .\..\gyp\gyp.bat -I common.gypi --depth=. --generator-output=out --build=Release --build=Debug -Dhost_arch=x64 -Dtarget_arch=x64 -Duv_library=shared_library -f msvs uv.gyp
cd ..\..
sleep 60
.\make.bat

git submodule update --init --recursive

::build libuv
cd third-party\libuv
git checkout v1.10.1
Call .\..\gyp\gyp.bat -I common.gypi --depth=. --generator-output=out --build=Release --build=Debug -Dhost_arch=x64 -Dtarget_arch=x64 -Duv_library=static_library -f msvs uv.gyp
Call .\..\gyp\gyp.bat -I common.gypi --depth=. --generator-output=out --build=Release --build=Debug -Dhost_arch=x64 -Dtarget_arch=x64 -Duv_library=shared_library -f msvs uv.gyp
cd ..\..

Call .\make.bat

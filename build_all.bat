git submodule update --init --recursive
cd third_party\libuv
git checkout v1.10.1
cd ..\..
.\make.bat

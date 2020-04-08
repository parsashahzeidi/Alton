@echo off

mkdir Windows
cd Windows

mkdir WorkDir
cd WorkDir

cmake ../../.. -G ninja -DNDEBUG=off
ninja -C . -j 5

copy /y ./Run.exe ../Alton.exe

cd ..
rmdir /s /q WorkDir
cd ..


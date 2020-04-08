mkdir -p GnuLinux
cd GnuLinux

mkdir WorkDir
cd WorkDir

cmake ../../.. -G ninja -DNDEBUG=off
ninja -C . -j 5

cp -T ./Run ../Alton

cd ..
rm -r WorkDir
cd ..

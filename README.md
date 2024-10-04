# host_app
sudo apt update

# Install the Qt development libraries
sudo apt install -y qtbase5-dev qtchooser qt5-qmake qtbase5-dev-tools

qmake --version


#For Clean Build
rm -rf build

mkdir build
cd build
cmake ..

make

# Not working, ensure permissions
chmod -R 755 build

cmake -DCMAKE_BUILD_TYPE=Release ..
make


#For Cross Compilation into exe
sudo apt install mingw-w64

sudo apt install qt5-qmake qtbase5-dev qtbase5-dev-tools
sudo apt install qtbase5-private-dev-mingw-w64

touch windows_toolchain.cmake

mkdir build-windows
cd build-windows

cmake .. -DCMAKE_TOOLCHAIN_FILE=../windows_toolchain.cmake -DCMAKE_PREFIX_PATH=/usr/x86_64-w64-mingw32

make


#still not working

#Use linuxdeployqt to Create a Standalone App
#download it & make it executable

chmod +x linuxdeployqt-continuous-x86_64.AppImage
# run on binary
./linuxdeployqt-continuous-x86_64.AppImage ./HelloQtApp -appimage

# host_app
```bash
sudo apt update
```
# Install CMake and build tools
```bash
sudo apt install -y cmake build-essential
```
# Install the Qt development libraries
```bash
sudo apt install -y qtbase5-dev qtchooser qt5-qmake qtbase5-dev-tools

qmake --version
```
## For Clean Build
```bash
rm -rf build

mkdir build
cd build

make
```
# Not working, ensure permissions
cmake ..
```bash
chmod -R 755 build

cmake -DCMAKE_BUILD_TYPE=Release ..
make
```

#For Cross Compilation into exe
```bash
sudo apt install mingw-w64

sudo apt install qt5-qmake qtbase5-dev qtbase5-dev-tools
sudo apt install qtbase5-private-dev-mingw-w64

touch windows_toolchain.cmake

mkdir build-windows
cd build-windows

cmake .. -DCMAKE_TOOLCHAIN_FILE=../windows_toolchain.cmake -DCMAKE_PREFIX_PATH=/usr/x86_64-w64-mingw32

make
```

# still not working

Use linuxdeployqt to Create a Standalone App
download it & make it executable
```bash
chmod +x linuxdeployqt-continuous-x86_64.AppImage
```
# run on binary
```bash
./linuxdeployqt-continuous-x86_64.AppImage ./HelloQtApp -appimage
```
# compiling static Qt libraries
```bash
git clone https://github.com/qt/qtbase.git
cd qtbase
./configure -static -release -prefix /path/to/install

make
make install
```

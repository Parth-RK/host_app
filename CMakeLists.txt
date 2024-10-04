cmake_minimum_required(VERSION 3.10)

# Set the project name
project(HelloQtApp VERSION 1.0)

# Ensure that CMake is looking for Qt5
set(CMAKE_PREFIX_PATH "/usr/lib/x86_64-linux-gnu/cmake/Qt5")

# Executable's filepath
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


# Find the required Qt5 components (Widgets for GUI apps)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(HelloQtApp main.cpp)

# Link the executable with the Qt5 Widgets library
target_link_libraries(HelloQtApp Qt5::Widgets)

#included .qrc
qt5_add_resources(RESOURCES resources.qrc)
target_sources(HelloQtApp PRIVATE ${RESOURCES})
# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

# Set the project name
project(CppProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(CppProject src/main.cpp src/operations.cpp src/utils.cpp)

# Include directories
include_directories(src)
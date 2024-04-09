cmake_minimum_required(VERSION 3.10)  # CMake version check
project(tasks)               # Create project ""
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of the project root directory as a source file
set(tasks main.cpp)
add_executable(tasks main.cpp)
cmake_minimum_required(VERSION 3.10)

# Project Name
project(Intent_Identifier VERSION 1.0)

# C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

                  
# Add Main.cpp
add_executable(Intent_Identifier src/main.cpp)

include_directories("src/")

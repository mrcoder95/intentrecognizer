cmake_minimum_required(VERSION 3.10)

# Project Name
project(Intent_Identifier_Tester VERSION 1.0)

# C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

enable_testing()
#Set Google Test Path
SET(GTEST_PATH "/home/mp952254/ES/e/gtest/gtest")

find_package(GTest REQUIRED PATHS ${GTEST_PATH}/lib64/cmake/)
                          
# Add Test.cpp
add_executable(Intent_Identifier_Tester test.cpp)
add_test(
    NAME Test_Intent_Identifier_Tester 
    COMMAND Intent_Identifier_Tester
)

include_directories("../src/")
include_directories(${GTEST_PATH}/include)
target_link_libraries(Intent_Identifier_Tester pthread ${GTEST_PATH}/lib64/libgtest.a ${GTEST_PATH}/lib64/libgtest_main.a)


cmake_minimum_required (VERSION 3.10)
project(Storage)
set (CMAKE_CXX_FLAGS "-g -std=c++0x")


add_executable(Storage src/DataStorage.cpp
                src/ReadableStorageA.cpp
                src/ReadableStorageB.cpp
)

target_include_directories(Storage PUBLIC ${PROJECT_SOURCE_DIR}/include)

#add_subdirectory(test)  // Some tests in the end
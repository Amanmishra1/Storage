cmake_minimum_required (VERSION 3.10)
project(Storage)
set (CMAKE_CXX_FLAGS "-g -std=c++14")


add_executable(Storage src/DataStorage.cpp
                src/ReadableStorageA.cpp
                src/ReadableStorageB.cpp
                src/main.cpp
)

target_include_directories(Storage PUBLIC ${PROJECT_SOURCE_DIR}/include)


cmake_minimum_required(VERSION 3.29)
project(BLG223E)

set(CMAKE_CXX_STANDARD 23)

add_executable(BLG223E main.cpp
        include/LinkedList.h
        include/Node.h
        src/Node.cpp
        src/LinkedList.cpp)

cmake_minimum_required(VERSION 3.24)
project(HMSCOP2006)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HMSCOP2006
        .idea/.gitignore
        .idea/HMSCOP2006.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        .gitattributes
        main.cpp
        main.h
        README.md)

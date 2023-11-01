cmake_minimum_required(VERSION 3.26)
project(ArvoreB C)

set(CMAKE_C_STANDARD 11)

add_executable(ArvoreB
        btree.c
        deletion.c
        insertion.c
        btree.h
        deletion.h
        insertion.h)

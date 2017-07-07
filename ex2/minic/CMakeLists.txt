cmake_minimum_required(VERSION 3.7)
project(minic)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        test/collatz.c
        test/euler9.c
        test/knight.c
        test/mandel.c
        test/prime.c
        test/queen.c
        Makefile
        minic.y
        y.tab.c
        yacc.c)

add_executable(minic ${SOURCE_FILES})
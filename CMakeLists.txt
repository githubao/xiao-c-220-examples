cmake_minimum_required(VERSION 3.3)
project(xiao_c_220_examples)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
#        master/sec001_hello_word.c
#        master/sec002/print.c
#        master/sec002/sec002_include.c
#        master/sec003_scanf.c
#        master/sec004_triop.c
#        master/sec005_char.c
#        master/sec006_sizeof.c
#        master/sec007_increase.c
#        master/sec008_for.c
#        master/sec009_forfor.c
        master/sec010_while.c)

add_executable(xiao_c_220_examples ${SOURCE_FILES})
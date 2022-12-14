project(hello)
cmake_minimum_required(VERSION 3.16)

find_package(cdt)

add_contract( check_features check_features check.cpp )
target_include_directories( check_features PUBLIC ${CMAKE_SOURCE_DIR}/../include )
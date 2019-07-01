cmake_minimum_required(VERSION 3.10)
project(ver1)
add_executable(Omni tut2.cpp )
target_link_libraries(Omni PRIVATE "address to /libcomedi.a" )

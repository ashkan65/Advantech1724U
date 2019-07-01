cmake_minimum_required(VERSION 3.10)
project(Hed1)
# add_library(
# 	comedi_h
# # 	# charli.cpp
# # 	# charli.hpp
# 	comedilib.h
# 	comedilib.hpp
# 	)
add_executable(Omni tut2.cpp )
INCLUDE_DIRECTORIES("/home/ashkan/eigen/source" ,"/usr/local/lib")

target_link_libraries(Omni PRIVATE "/usr/local/lib/libcomedi.a" )



# set(HEADER_FILES /home/ashkan/comedilib/include/comedi.h)

# add_library(mylib libsrc.cpp ${HEADER_FILES})
# target_include_directories(mylib PRIVATE ${YOUR_DIRECTORY})
# add_executable(myexec execfile.cpp ${HEADER_FILES})
# target_include_directories(myexec PRIVATE ${YOUR_DIRECTORY})

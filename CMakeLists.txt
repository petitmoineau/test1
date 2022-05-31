cmake_minimum_required(VERSION 3.19)
 project(test1)
 
  include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
 conan_basic_setup()

add_executable(test1 Gaussian.cpp BlurLib.cpp ${CMAKE_BINARY_DIR}/../lib/BlurLib.h)

target_link_libraries(test1 ${CONAN_LIBS})
target_include_directories(test1 PRIVATE ${CMAKE_BINARY_DIR}/../lib)

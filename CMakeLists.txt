cmake_minimum_required(VERSION 3.23)
project(Test)

set(CMAKE_CXX_STANDARD 14)

add_executable(Test test.cpp)

## includes SFML dir
#include_directories(C:/SFML-2.6.1/include)
##link_directories("C:/SFML-2.6.1/include")
#
## sets the root in the SFML file
#set(SFML_ROOT C:/SFML-2.6.1)
#set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
#
## searches for SFML lib dir files and selects them if found
#find_package(SFML REQUIRED system window graphics network audio)
#if (SFML_FOUND)
#    include_directories(${SFML_INCLUDE_DIR})
#    target_link_libraries(Test ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
#endif()
#
#file(COPY DESTINATION ${CMAKE_BINARY_DIR})
#
## Copy dlls to build
#if(WIN32)
#    file(GLOB BINARY_DEP_DLLS "${SFML_INCLUDE_DIR}/../bin/*.dll")
#    file(COPY ${BINARY_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
#    file(GLOB MINGW_DEP_DLLS "C:/mingw64/bin/*.dll")
#    file(COPY ${MINGW_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
#endif()

#copies dll info into program @ run time
set(SFML_STATIC_LIBRARIES TRUE)

#sets directory root for cmake
set(SFML_DIR C:/SFML-2.6.1-64bit/lib/cmake/SFML)

find_package(SFML COMPONENTS system window graphics audio network REQUIRED)
include_directories(C:/SFML-2.6.1-64bit/include)

#targets the dll libraries
target_link_libraries(Test sfml-system sfml-window sfml-graphics sfml-audio)
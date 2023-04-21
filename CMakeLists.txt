cmake_minimum_required(VERSION 3.24)
project(Println)
set(CMAKE_CXX_STANDARD 20)


add_library(Colour src/Colours.cpp)
add_library(Print src/Println.cpp)

set(SOURCE_FILES 
		src/main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} Colour Print)
target_include_directories(${PROJECT_NAME} PRIVATE src)

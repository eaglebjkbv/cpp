cmake_minimum_required(VERSION 3.0)

project(OpenGlProgram1)

set(PROJECT_DIR ${CMAKE_SOURCE_DIR})
set(PROJECT_INCLUDE_DIR ${PROJECT_DIR}/include)
set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)

set(PROJECT_SOURCES
        ${PROJECT_SOURCE_DIR}/main.cpp 
        ${PROJECT_SOURCE_DIR}/kutuphane.cpp
        )
set(PROJECT_HEADERS ${PROJECT_INCLUDE_DIR}/kutuphane.hpp)
find_package(glfw3 3.2 REQUIRED)
include_directories(${PROJECT_INCLUDE_DIR})

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
target_link_libraries(${PROJECT_NAME} glfw)






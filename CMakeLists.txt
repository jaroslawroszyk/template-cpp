cmake_minimum_required(VERSION 3.23.2)
project(studentDb)

set(CMAKE_CXX_STANDARD 20)
set(FLAGS -Wall -Wextra -Werror -Wpedantic)

set(SOURCES
        src/add.cpp)
set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)

include_directories(${COMMON_INCLUDES})

add_library(project1_lib ${SRC_FILES} ${SOURCES})
add_executable(project1 ${PROJECT_SOURCE_DIR}/src/main.cpp)

target_link_libraries(project1 project1_lib ${FLAGS})

add_subdirectory(./googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/test/*.cpp)

add_executable(runUnitTests ${TEST_SRC_FILES})

target_link_libraries(runUnitTests gtest gtest_main project1_lib)

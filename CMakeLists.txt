cmake_minimum_required(VERSION 3.14...3.25)

project(
    template-cpp
    DESCRIPTION "Project initalizer for cpp"
    VERSION 0.1
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 23)

if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
    message(FATAL_ERROR "In-source builds are not allowed")
endif()

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    set(CMAKE_CXX_STANDARD 20)
    set(CMAKE_CXX_EXTENSIONS OFF)
endif()


set(HEADERS include/test.hpp)
set(SOURCES src/test.cpp)
set(UTS uts/test_tests.cpp)
set(FLAGS -Wall -Wextra -Werror -Wpedantic)

add_executable(${PROJECT_NAME} ${SOURCES} src/main.cpp)
target_compile_options(${PROJECT_NAME} PUBLIC ${FLAGS})

# GTEST
add_subdirectory(./googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_library(${MODULE_NAME} STATIC ${SOURCES} ${HEADERS}) 

add_executable(${PROJECT_NAME}-ut  ${SOURCES} ${UTS})
target_compile_options(${PROJECT_NAME}-ut PRIVATE ${FLAGS})
target_link_libraries(${PROJECT_NAME}-ut gtest gtest_main)
add_test(${PROJECT_NAME}-UT-CTEST ${PROJECT_NAME}-ut)

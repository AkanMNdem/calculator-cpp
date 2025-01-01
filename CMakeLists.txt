cmake_minimum_required(VERSION 3.15)
project(Calculator)

set(CMAKE_CXX_STANDARD 17)

# Add the source files
add_executable(Calculator src/main.cpp)

# Include directories
target_include_directories(Calculator PRIVATE include)

# Link Conan dependencies if added later
if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
endif()
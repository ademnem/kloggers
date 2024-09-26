# Required version of CMake
cmake_minimum_required(VERSION 3.20)

# C++ standard used in project
set(CMAKE_CXX_STANDARD 20) # standard to C++20
set(CMAKE_CXX_EXTENSIONS OFF) # disable non-standard extensions
set(CMAKE_CXX_STANDARD_REQUIRED ON) # compiler must support C++20


# Export commands required to compilel program
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

##########################
# Setting up executables #
##########################
set(MAIN_SRC_FILES # sets associated files
    src/main.cpp
)
project(main CXX) # sets project name
add_executable(${PROJECT_NAME}, ${COUNT_SRC_FILES})




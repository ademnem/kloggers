cmake_minimum_required( VERSION 3.20 )

project( main CXX )
set( MAIN_SRC_FILES
    src/main.cpp
    src/keys.hpp
    src/keys.cpp
)
add_executable( ${PROJECT_NAME} ${MAIN_SRC_FILES} )

cmake_minimum_required(VERSION 3.20)

project(consolekit VERSION 0.1.0 LANGUAGES CXX)

option(BUILD_SHARED_LIBS "Build libraries as shared" OFF)

add_library(consolekit
    src/Composer.cpp
    src/Console.cpp
    src/ConsoleBuffer.cpp
)

target_include_directories(consolekit
    PUBLIC
        include
)

target_compile_features(consolekit
    PUBLIC
        cxx_std_20
)

add_executable(basic
    examples/basic.cpp
)

target_link_libraries(basic
    PRIVATE
        consolekit
)

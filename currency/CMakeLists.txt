cmake_minimum_required(VERSION 3.14)
project(currency)

set(CMAKE_CXX_STANDARD 17)
file(GLOB SRC "src/*.cpp")
file(GLOB HPP "src/*.hpp")

add_library(
    ${PROJECT_NAME} STATIC
    ${SRC}
    ${HPP}
)
target_include_directories(${PROJECT_NAME} PUBLIC include)

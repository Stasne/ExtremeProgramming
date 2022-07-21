cmake_minimum_required(VERSION 3.14)
project(currency_test)

set(CMAKE_CXX_STANDARD 17)
file(GLOB SRC "*.cc")
include_directories("${CMAKE_SOURCE_DIR}")
add_executable(
    ${PROJECT_NAME}
    ${SRC}
)
target_link_libraries(
    ${PROJECT_NAME}
    PUBLIC GTest::gtest_main
    PUBLIC currency
)

gtest_discover_tests(${PROJECT_NAME})

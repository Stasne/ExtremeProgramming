cmake_minimum_required(VERSION 3.14)
project(t1_tests)

set(CMAKE_CXX_STANDARD 17)
file(GLOB SRC "*.cc")

add_executable(
    ${PROJECT_NAME}
    ${SRC}
)
target_link_libraries(
    ${PROJECT_NAME}
    GTest::gtest_main
)
include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
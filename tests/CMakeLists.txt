cmake_minimum_required(VERSION 3.14)
project(currency_test)

include(GoogleTest)

set(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")
SET(CMAKE_EXE_LINKER_FLAGS "-fprofile-arcs -ftest-coverage")

file(GLOB SRC "currency_tests/*.cpp")
include_directories("${CMAKE_SOURCE_DIR}")
include_directories("${CMAKE_SOURCE_DIR}/src")
add_executable(
    ${PROJECT_NAME}
    ${SRC}
)
target_link_libraries(
    ${PROJECT_NAME}
    PRIVATE GTest::gtest_main
    PRIVATE currency
)

gtest_discover_tests(${PROJECT_NAME})

include(Coverage.cmake)

setup_target_for_coverage_lcov(
    NAME coverage # New target name
    EXECUTABLE ${PROJECT_NAME} -j ${PROCESSOR_COUNT} # Executable in PROJECT_BINARY_DIR
    DEPENDENCIES ${PROJECT_NAME} # Dependencies to build first
    BASE_DIRECTORY "../" # Base directory for report
    EXCLUDE "*/gtest*" # Patterns to exclude (can be relative
    NO_DEMANGLE # Don't demangle C++ symbols
)

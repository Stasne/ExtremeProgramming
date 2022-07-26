cmake_minimum_required(VERSION 3.14)
project(t1)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(currency)

# if testing ENABLED
set(TESTS "")

if(DEFINED TESTS)
    include(FetchContent)
    FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
    )

    # For Windows: Prevent overriding the parent project's compiler/linker settings
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(googletest)

    enable_testing()
    add_subdirectory(tests)
endif()

# end if
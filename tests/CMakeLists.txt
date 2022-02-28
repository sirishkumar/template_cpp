include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.11.0
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
set(BUILD_GTEST ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

################################
# Tests
################################
set(TESTNAME smart_ptr_tests)

# Add test cpp file
add_executable(${TESTNAME}
        test_unique_ptr.cpp)

# Link test executable against gtest & gtest_main
target_link_libraries(${TESTNAME} gtest gtest_main smart_ptrs)
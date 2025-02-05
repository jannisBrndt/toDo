cmake_minimum_required(VERSION 3.10)
project(MyProject VERSION 1.0.0 LANGUAGES CXX)

# ------------------------------------------------------------------
# 1. Set C++ Standard
# ------------------------------------------------------------------
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ------------------------------------------------------------------
# 2. Source Files
#    Manually list all your .cpp files here
# ------------------------------------------------------------------
set(SOURCES
        # Add more source files here...
	src/node.cpp
	src/list.cpp
)

# ------------------------------------------------------------------
# 3. Create a Library from your Sources
# ------------------------------------------------------------------
add_library(MyProjectLib
    ${SOURCES}
)

# Include directories if you have headers in "include/"
target_include_directories(MyProjectLib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# ------------------------------------------------------------------
# 4. (Optional) Main Executable
#    If you have a main() somewhere, create an executable and link the library.
#    You might have a separate main.cpp or something similar.
# ------------------------------------------------------------------
add_executable(MyProject
    src/main.cpp
    # Or wherever your main() is
)
target_link_libraries(MyProject
    PRIVATE
        MyProjectLib
)

# ------------------------------------------------------------------
# 5. Google Test Integration
# ------------------------------------------------------------------
include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        release-1.12.1
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

enable_testing()

# ------------------------------------------------------------------
# 6. Test Executable
# ------------------------------------------------------------------
set(TEST_SOURCES
    tests/test_main.cpp
    tests/test_node.cpp
    tests/test_list.cpp
    # Add more test files here...
)

add_executable(tests
    ${TEST_SOURCES}
)

target_link_libraries(tests
    PRIVATE
        MyProjectLib   # Link the library, not the main executable!
        gtest
        gtest_main
)

# ------------------------------------------------------------------
# 7. Register Tests with CTest
# ------------------------------------------------------------------
include(GoogleTest)
gtest_discover_tests(tests)

cmake_minimum_required(VERSION 3.10) 
project(trpo-lab-1 LANGUAGES CXX)


enable_testing()

# Find GoogleTest
# This will search for GTestConfig.cmake or use the FindGTest module
find_package(GTest REQUIRED)

# Add your test executable
# Replace 'MyTestExecutable' with your desired test executable name
# Replace 'MyTestFile.cpp' with the source file(s) containing your GTest tests
add_executable(main main.cpp)

# Link your test executable against GTest and GTest_main
# GTest::gtest provides the GTest framework, GTest::gtest_main provides the main() function for tests
target_link_libraries(main PRIVATE GTest::gtest_main)

# Discover tests using gtest_discover_tests
# This automatically registers tests found in the executable with CTest
gtest_discover_tests(main)

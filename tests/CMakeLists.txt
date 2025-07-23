#this will do the following:

#create a new program called run_tests
# links this program with google test
# register this program with cmakes test runner

#Create an executable for our tests
# Create an executable that will contain all our tests
add_executable(run_tests first_test.cpp)

#now link the test with against the main library
target_link_libraries(run_tests PRIVATE InsightEDALib)

# Link our test program against the Google Test libraries
target_link_libraries(run_tests PRIVATE GTest::gtest_main)

# Find and register the tests in our executable with CTest
include(GoogleTest)
gtest_discover_tests(run_tests)

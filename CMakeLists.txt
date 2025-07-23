# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.16)

# Define our project's name and specify it's a C++ project
project(InsightEDA CXX)

#Add library
add_library(InsightEDALib src/InsightEDA/logic.cpp)
#make the library headers available to other targets
target_include_directories(InsightEDALib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
#tell cmake to create the main executable
add_executable(insight_eda src/main.cpp)
#Link the executable against our lib    
target_link_libraries(insight_eda PRIVATE InsightEDALib)

#enable testing
enable_testing()
include(FetchContent)
#declare google test as a dependency
FetchContent_Declare(
    googletest      
    URL https://github.com/google/googletest/archive/v1.14.0.zip
    
)
#since we have many testcases in the project so it will be better to have gtests enabled only
#when testing is enabled

FetchContent_MakeAvailable(googletest)

# Tell CMake to create an executable named "insight_eda" 
# from our main.cpp source file
add_executable(insight_eda src/main.cpp)

#Add the tests directory
add_subdirectory(tests)
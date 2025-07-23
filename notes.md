Folder structure explained:
docs have all the documentation of the project
examples - code for showing how to use the library
include - for all the header files of the project
src - for the source files of the project
tests - for all our tests code
third_party - for all the external libraries we might use

need of a testing framework?
let us say we build a funciton of stats and after optimizing it how can we be sure that it
is running the way it is supposed to run? we do it by writing unit test cases
for this project we use Google Test framework - we will use FetchContent feature of CMake to dowload and set it up automatically


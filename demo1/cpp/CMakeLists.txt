#CMakeLists.txt
project(demo1)
include_directories(/usr/lib/jvm/java-8-openjdk-amd64/include)
include_directories(/usr/lib/jvm/java-8-openjdk-amd64/include/linux)
include_directories(../java)
# add_executable(hello HelloWorld.cpp)
add_library(hello SHARED HelloWorld.cpp)
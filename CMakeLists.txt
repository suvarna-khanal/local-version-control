cmake_minimum_required (VERSION 3.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CMAKE_BUILD_TYPE Debug)


project (local-version-control)
add_executable(lovec create-repo.cpp)

target_link_libraries(lovec boost_filesystem boost_system)


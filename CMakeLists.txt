cmake_minimum_required (VERSION 3.0)

set(CMAKE_CXX_FLAGS "-std=c++14 -Wall -Wextra -O2")
set(CMAKE_BUILD_TYPE Debug)
#message( ${CMAKE_CXX_FLAGS})
project (local-version-control)

set(SOURCE_PATH src)
set(HEADER_PATH include)

set(SOURCE_FILE ${SOURCE_PATH}/main.cpp  ${SOURCE_PATH}/Repository.cpp ${SOURCE_PATH}/Branch.cpp)

add_executable(lovec ${SOURCE_FILE})

include_directories(${HEADER_PATH})

target_link_libraries(lovec boost_filesystem boost_system)


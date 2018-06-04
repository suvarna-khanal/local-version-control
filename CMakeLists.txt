cmake_minimum_required (VERSION 3.0)

#set(CMAKE_CXX_FLAGS "-std=c++14 -Wall -Wextra -O3")
#set(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_FLAGS "-std=c++14 -Wall -Wextra")
set(CMAKE_BUILD_TYPE Debug)

project (local-version-control)

set(SOURCE_PATH src)
set(HEADER_PATH include 
				include/structs/
				include/ext_headers/sha512/
				boost_headers_only/boost_1_61_0/)


set(SOURCE_FILE ${SOURCE_PATH}/main.cpp
	        	${SOURCE_PATH}/Repository.cpp 
				${SOURCE_PATH}/Branch.cpp
				${SOURCE_PATH}/Hash.cpp
				${SOURCE_PATH}/ext_src/sha512/sha512.cpp
				${SOURCE_PATH}/Commit.cpp
				${SOURCE_PATH}/File_IO.cpp
				${SOURCE_PATH}/Add.cpp)

add_executable(lovec ${SOURCE_FILE})

include_directories(${HEADER_PATH})

target_link_libraries(lovec boost_filesystem
						    boost_system
						    boost_serialization)


# CMakeList.txt : CMake project for FinalProjectTest1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.14)

# Add source to this project's executable.
add_executable (FinalProjectTest1 "FinalProjectTest1.cpp")

set(CMAKE_CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

find_package(wxWidgets REQUIRED COMPONENTS net html core base)
include(${wxWidgets_USE_FILE})

find_package(CURL REQUIRED)
include_directories(${CURL_INCLUDE_DIR})

find_package(OpenCV REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )


# TODO: Add tests and install targets if needed.
target_link_libraries(FinalProjectTest1 PRIVATE ${CURL_LIBRARIES})
target_link_libraries(FinalProjectTest1 PRIVATE nlohmann_json)
target_link_libraries(FinalProjectTest1 PRIVATE HTTPRequest)
target_link_libraries(FinalProjectTest1 PRIVATE ${wxWidgets_LIBRARIES})
target_link_libraries(FinalProjectTest1 PRIVATE ${OpenCV_LIBS} )

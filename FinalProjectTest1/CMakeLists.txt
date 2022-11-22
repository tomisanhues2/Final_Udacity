# CMakeList.txt : CMake project for FinalProjectTest1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (FinalProjectTest1 "FinalProjectTest1.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET FinalProjectTest1 PROPERTY CXX_STANDARD 20)
endif()

find_package(wxWidgets REQUIRED COMPONENTS net html core base)
include(${wxWidgets_USE_FILE})

find_package(CURL REQUIRED)
include_directories(${CURL_INCLUDE_DIR})



# TODO: Add tests and install targets if needed.
target_link_libraries(FinalProjectTest1 PRIVATE ${CURL_LIBRARIES})
target_link_libraries(FinalProjectTest1 PRIVATE nlohmann_json)
target_link_libraries(FinalProjectTest1 PRIVATE HTTPRequest)
target_link_libraries(FinalProjectTest1 PRIVATE ${wxWidgets_LIBRARIES})

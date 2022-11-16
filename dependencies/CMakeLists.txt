include(FetchContent)

FetchContent_Declare(http GIT_REPOSITORY https://github.com/elnormous/HTTPRequest.git)

FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.2/json.tar.xz)

add_subdirectory(http)
add_subdirectory(json)
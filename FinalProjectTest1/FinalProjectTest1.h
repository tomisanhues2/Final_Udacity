// FinalProjectTest1.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <string>
#include "Movie.cpp"
#pragma comment(lib,"WS2_32")

extern std::string PRIVATE_KEY = "9165ddc0";
extern std::string DATA_REQUEST_URL_START = "http://www.omdbapi.com/?apikey=" + PRIVATE_KEY + "&";
extern std::string POSTER_REQUEST_URL_START = "http://img.omdbapi.com/?apikey=" + PRIVATE_KEY + "&";

// TODO: Reference additional headers your program requires here.

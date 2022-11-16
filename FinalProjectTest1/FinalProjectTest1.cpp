// FinalProjectTest1.cpp : Defines the entry point for the application.
//

#include "FinalProjectTest1.h"
#include <nlohmann/json.hpp> //https://json.nlohmann.me/
#include <HTTPRequest.hpp>

using namespace std;
using json = nlohmann::json;

int main()
{

    try
    {
        http::Request request{ DATA_REQUEST_URL_START + "t=The+imitation+game" };

        const auto response = request.send("GET");

        std::string JSON_string = std::string{ response.body.begin(), response.body.end()};

        json temp = json::parse(JSON_string);

        std::cout << temp << '\n';

        obj::Movie m{
            temp["Title"].get<std::string>(),
            temp["Year"].get<std::string>()
        };

        std::cout << m.title << '\n';


    } catch (const std::exception& e)
    {
        std::cerr << "Request failed, error: " << e.what() << '\n';
    }


	return 0;
}

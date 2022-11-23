#pragma once

#include <stdexcept>
#include <regex>
namespace obj {
	class Movie {
		
		private: 
		std::string title;
		std::string year;
		std::string rated;
		std::string released;
		std::string runtime;
		std::string genre;
		std::string director;
		std::string writer;
		std::string actors;
		std::string plot;
		std::string language;
		std::string country;
		std::string awards;
		std::string poster;
		// std::vector<Rating> ratings;
		std::string metascore;
		std::string imdb_rating;
		std::string imdb_votes;
		std::string imdb_id;
		std::string type;
		std::string dvd;
		std::string box_office;
		std::string production;
		std::string website;
		std::string response;

		public:
			NLOHMANN_DEFINE_TYPE_INTRUSIVE(Movie, title, year, rated,runtime, genre, director, plot);
	};
}
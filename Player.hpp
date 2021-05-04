//
// AUTHOR: Tal Zichlinsky
// Header file for class player
#pragma once

#include "Color.hpp"
#include "Board.hpp"
#include "City.hpp"

#include <string>

namespace pandemic{
    class Player{

        City city;
        string role;

        public:
            // Constructor 
            Player(const Board &board, const City &city);
            Player();

            // Destructor
            ~Player();

            Player &drive(const City &city);

            Player &fly_direct(const City &city);

            Player &fly_charter(const City &city);

            Player &fly_shuttle(const City &city);

            Player &build();

            Player &discover_cure(const Color &color);

            Player &treat(const City &city);

            std::string role();

            Player &take_card(const City &city);

            City &get_city();

            int num_of_cards();
    };
}
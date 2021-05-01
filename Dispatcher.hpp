//
// AUTHOR: Tal Zichlinsky
// Header file for class Dispatcher

#include "Player.hpp"
#include "City.hpp"

namespace pandemic{
    class Dispatcher: public Player{
        public:

            using Player::Player;
            
            // Overloading method from Player
            Player &fly_direct(const City city);
    };
}
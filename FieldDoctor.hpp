//
// AUTHOR: Tal Zichlinsky
// Header file for class FieldDoctor

#include "Player.hpp"
#include "City.hpp"

namespace pandemic{
    class FieldDoctor: public Player{
        public:

            using Player::Player;
        
            // Overloading method from Player
            void treat(const City &city);
    };
}
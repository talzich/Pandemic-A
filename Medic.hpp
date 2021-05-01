//
// AUTHOR: Tal Zichlinsky
// Header file for class Medic

#include "Player.hpp"

namespace pandemic{
    
    class Medic: public Player{
        public:

            using Player::Player;
        
            // Overloading methods from Player
            void drive(const City &city);

            void fly_direct(const City &city);

            void fly_charter(const City &city);

            void fly_shuttle(const City &city);

            void treat(const City &city);

    };
}
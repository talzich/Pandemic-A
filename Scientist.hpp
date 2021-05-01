//
// AUTHOR: Tal Zichlinsky
// Header file for class Scientist

#include "Player.hpp"

namespace pandemic{
    class Scientist: public Player{
        public:

            using Player::Player;
            
            // Overloading method from Player
            void doscover_cure(const Color &color);
    };
}
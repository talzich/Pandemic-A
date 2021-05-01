//
// AUTHOR: Tal Zichlinsky
// Header file for class Researcher

#include "Player.hpp"

namespace pandemic{
    class Researcher: public Player{
        public:
        
            using Player::Player;
            
            // Overloading method from Player
            Player &discover_cure(const Color &color);
    };
}
//
// AUTHOR: Tal Zichlinsky
// Header file for class Researcher

#include "Player.hpp"

namespace pandemic{
    class Researcher: public Player{
        public:
        
            // Overloading method from Player
            void discover_cure(const Color &color);
    };
}
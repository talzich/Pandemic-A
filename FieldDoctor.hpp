//
// AUTHOR: Tal Zichlinsky
// Header file for class FieldDoctor

#include "Player.hpp"

namespace pandemic{
    class FieldDoctor: public Player{
        public:
        
            // Overloading method from Player
            void treat(const City &city);
    };
}
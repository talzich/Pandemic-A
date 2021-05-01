//
// AUTHOR: Tal Zichlinsky
// Header file for class Dispatcher

#include "Player.hpp"

namespace pandemic{
    class Dispatcher: public Player{
        public:

            // Overloading method from Player
            void fly_direct(const City city);
    };
}
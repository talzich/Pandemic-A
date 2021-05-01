//
// AUTHOR: Tal Zichlinsky
// Header file for class OperationsExpert

#include "Player.hpp"

namespace pandemic{
    class OperationsExpert: public Player{
        public:

            using Player::Player;

            // Overloading method from Player
            Player &build();
    };
}
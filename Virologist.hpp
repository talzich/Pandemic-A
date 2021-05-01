// 
// AUTHOR: Tal Zichlinsky
// Header file for class Virologist

#include "City.hpp"
#include "Player.hpp"

namespace pandemic{
    class Virologist: public Player{

        using Player::Player;
        
        // Overloading method from Player
        Player &treat(const City &city);
    };
}
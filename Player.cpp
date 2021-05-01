//
// AUTHOR: Tal Zichlinsky
// This file will be used to build the Player class as described by this assignment's README.md file

#include <iostream>

#include "Color.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Player.hpp"

using namespace std;

namespace pandemic{

    // ctor & dtor
    Player::Player(const Board &board, const City &city){}
    Player::Player(){}
    Player::~Player(){}

    Player& Player::drive(const City &city){ return *this; }
    
    Player& Player::fly_direct(const City &city){ return *this; }

    Player& Player::fly_charter(const City &city){ return *this; }

    Player& Player::fly_shuttle(const City &city){ return *this; }

    Player& Player::build(){ return *this; }

    Player& Player::discover_cure(const Color &color){ return *this; }

    Player& Player::treat(const City &city){ return *this; }

    string Player::role(){}
    
    Player& Player::drive(const City &city){ return *this; }
}
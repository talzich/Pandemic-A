//
// AUTHOR: Tal Zichlinsky
// This file will be used to build the Board class as required in this assignment's README.md file

#include <iostream>

#include "Board.hpp"

using namespace std;

namespace pandemic{

    Board::Board(){}
    
    Board::~Board(){}

    int& Board::operator[](const City &city){ 
        int *x = new int(0);
        return *x;
    }
    
    ostream &operator<<(ostream &out, const Board &board){ return out; }

    void Board::read_cities(){}

    bool Board::is_clean(){ return false; }
}
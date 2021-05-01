// 
// AUTHOR: Tal Zichlinsky
// Header file for class Virologist

namespace pandemic{
    class Virologist: public Player{

        using Player::Player;
        
        // Overloading method from Player
        void treat(const City &city);
    };
}
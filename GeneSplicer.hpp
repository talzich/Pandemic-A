// 
// AUTHOR: Tal Zichlinsky
// Header file for class GeneSplicer

namespace pandemic{
    class GeneSplicer: public Player{
        
        using Player::Player;
        
        // Overloading method from Player
        void discover_cure(const Color &color);
    };
}
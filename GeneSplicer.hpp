// 
// AUTHOR: Tal Zichlinsky
// Header file for class GeneSplicer

namespace pandemic{
    class GeneSplicer: public Player{

        // Overloading method from Player
        void discover_cure(const Color &color);
    };
}
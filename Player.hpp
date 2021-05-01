//
// AUTHOR: Tal Zichlinsky
// Header file for class player

namespace pandemic{
    class Player{

        public:
            // Constructor 
            Player(const Board &board, const City &city);
            Player();

            // Destructor
            ~Player();

            Player &drive(const City &city);

            Player &fly_direct(const City &city);

            Player &fly_charter(const City &city);

            Player &fly_shuttle(const City &city);

            Player &build();

            Player &discover_cure(const Color &color);

            Player &treat(const City &city);

            string role();

            Player &take_card(const City &city);
    };
}
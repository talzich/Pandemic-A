//
// AUTHOR: Tal Zichlinsky
// Header file for class player

namespace pandemic{
    class Player{

        public:
            Player(const Board &board, const City &city);
            ~Player();

            void drive(const City &city);

            void fly_direct(const City &city);

            void fly_charter(const City &city);

            void fly_shuttle(const City &city);

            void build();

            void discover_cure(const Color &color);

            void treat(const City &city);

            void role();

            void take_card(const City &city);
    };
}
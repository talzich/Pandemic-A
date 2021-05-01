//
// AUTHOR: Tal Zichlinsky
// Header file for class Board

namespace pandemic{

    class Board{

        public:
            Board();
            
            ~Board();
            
            int operator[](const City &city){};

            friend ostream& operator<<(ostream &out, const Board &board);

            void read_cities();
    };
}
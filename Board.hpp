//
// AUTHOR: Tal Zichlinsky
// Header file for class Board

#include "City.hpp"

namespace pandemic{

    class Board{

        public:
            Board();
            
            ~Board();
            
            int& operator[](const City &city);

            friend std::ostream &operator<<(std::ostream &out, const Board &board);

            void read_cities();

            bool is_clean();
    };
}
#include "Page.hpp"
#include <vector>
#include <string>
#include "Direction.hpp"
using ariel::Direction;




using namespace std;

namespace ariel {
    
    class Notebook {
        private:
            vector<Page> notebook;
        public:
            void write(int page, int row, int column, Direction direction,const string &to_write);
            string read(int page, int row, int column, Direction direction, int length_to_read);
            void erase(int page, int row, int column, Direction direction, int length_to_erase);
            void show(int pages_to_show);
    };


};
#include "Notebook.hpp"
#include "Direction.hpp"
#include <vector>
#include <string>

using ariel::Direction;
using namespace std;
using namespace ariel;

void ariel::Notebook::write(int page, int row, int column, Direction direction, const string &to_write) {}
string ariel::Notebook::read(int page, int row, int column, Direction direction, int length_to_read){ return "";}
void ariel::Notebook::erase(int page, int row, int column, Direction direction, int length_to_erase){}
void ariel::Notebook::show(int pages_to_show){}
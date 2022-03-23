#include <iostream>
#include <stdexcept>
#include "Direction.hpp"
using namespace std;

namespace ariel{
    class Notebook{

        int x = 3;
        int y = 3;

        public:
          Notebook();  
          void write(int posX, int posY, int posZ, Direction pos, string data);
          string read(int posX, int posY,int posZ, Direction pos, int dataNum);
          void erase(int posX, int posY,int posZ, Direction pos, int dataNum);
          void show(int row);
    };
    
}
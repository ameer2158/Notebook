#include <iostream>
#include <stdexcept>
#include "Direction.hpp"
#include "Notebook.hpp"
using namespace std;

namespace ariel{
    Notebook::Notebook(){}

    void Notebook::write(int posX, int posY, int posZ, Direction pos, string data){}
    string Notebook::read(int posX, int posY, int posZ, Direction pos, int dataNum){
        return "";
    }
    void Notebook::erase(int posX, int posY,int posZ, Direction pos, int dataNum){}
    void Notebook::show(int row){}

}
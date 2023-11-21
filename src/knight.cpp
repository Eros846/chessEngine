#include "../header/knight.hpp"

knight::~knight(){
}

knight::knight(square* pos, Color col){
    position = pos;
    color = col;
}

bool knight::canMoveTo(square* destination) const{
    //To implement
    return true;
}

string knight::getSymbol() const{
    return color == Color::White ? "N" : "n";
}
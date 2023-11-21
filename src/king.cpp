#include "../header/king.hpp"

king::~king(){
}

king::king(square* pos, Color col){
    position = pos;
    color = col;
}

bool king::canMoveTo(square* destination) const{
    //To implement
    return true;
}

string king::getSymbol() const{
    return color == Color::White ? "K" : "k";
}



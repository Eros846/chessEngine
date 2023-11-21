#include "../header/king.hpp"

King::~King(){
}

King::King(Square* pos, Color col){
    position = pos;
    color = col;
}

bool King::canMoveTo(Square* destination) const{
    //To implement
    return true;
}

string King::getSymbol() const{
    return color == Color::White ? "K" : "k";
}



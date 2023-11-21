#include "../header/knight.hpp"

Knight::~Knight(){
}

Knight::Knight(Square* pos, Color col){
    position = pos;
    color = col;
}

bool Knight::canMoveTo(Square* destination) const{
    //To implement
    return true;
}

string Knight::getSymbol() const{
    return color == Color::White ? "N" : "n";
}
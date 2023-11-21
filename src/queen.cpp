#include "../header/queen.hpp"

Queen::~Queen(){
}

Queen::Queen(Square* pos, Color col){
    position = pos;
    color = col;
}

bool Queen::canMoveTo(Square* destination) const{
    //To implement
    return true;
}

string Queen::getSymbol() const{
    return color == Color::White ? "Q" : "q";
}
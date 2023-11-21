#include "../header/bishop.hpp"

Bishop::~Bishop(){
}

Bishop::Bishop(Square* pos, Color col){
    position = pos;
    color = col;
}

bool Bishop::canMoveTo(Square* destination) const{
    //To implement
    return true;
}

string Bishop::getSymbol() const{
    return color == Color::White ? "B" : "b";
}
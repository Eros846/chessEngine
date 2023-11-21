#include "../header/bishop.hpp"

bishop::~bishop(){
}

bishop::bishop(square* pos, Color col){
    position = pos;
    color = col;
}

bool bishop::canMoveTo(square* destination) const{
    //To implement
    return true;
}

string bishop::getSymbol() const{
    return color == Color::White ? "B" : "b";
}
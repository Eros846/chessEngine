#include "../header/queen.hpp"

queen::~queen(){
}

queen::queen(square* pos, Color col){
    position = pos;
    color = col;
}

bool queen::canMoveTo(square* destination) const{
    //To implement
    return true;
}

string queen::getSymbol() const{
    return color == Color::White ? "Q" : "q";
}
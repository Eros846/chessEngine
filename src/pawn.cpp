#include "../header/pawn.hpp"

pawn::~pawn(){
}

pawn::pawn(square* pos, Color col){
    position = pos;
    color = col;
}

bool pawn::canMoveTo(square* destination) const{
    //To implement
    return true;
}

string pawn::getSymbol() const{
    return color == Color::White ? "P" : "p";
}
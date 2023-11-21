#include "../header/pawn.hpp"

Pawn::~Pawn(){
}

Pawn::Pawn(Square* pos, Color col){
    position = pos;
    color = col;
}

bool Pawn::canMoveTo(Square* destination) const{
    //To implement
    return true;
}

string Pawn::getSymbol() const{
    return color == Color::White ? "P" : "p";
}
#include "../header/rook.hpp"

Rook::~Rook(){
}

Rook::Rook(Square* pos, Color col){
    position = pos;
    color = col;
}

bool Rook::canMoveTo(Square* destination) const{
    //To implement
    return true;
}

string Rook::getSymbol() const{
    return color == Color::White ? "R" : "r";
};
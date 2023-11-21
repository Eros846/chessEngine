#include "../header/rook.hpp"

rook::~rook(){
}

rook::rook(square* pos, Color col){
    position = pos;
    color = col;
}

bool rook::canMoveTo(square* destination) const{
    //To implement
    return true;
}

string rook::getSymbol() const{
    return color == Color::White ? "R" : "r";
};
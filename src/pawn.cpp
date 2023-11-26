#include "../header/pawn.hpp"

Pawn::~Pawn(){
}

Pawn::Pawn(Color col){
    color = col;
}

bool Pawn::canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const{
    //To implement
    return true;
}

string Pawn::getSymbol() const{
    return color == Color::White ? "P" : "p";
}
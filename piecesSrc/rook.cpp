#include "../piecesHeader/rook.hpp"

Rook::~Rook(){
}

Rook::Rook(Color col){
    color = col;
}

bool Rook::canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const{
    //To implement
    return true;
}

string Rook::getSymbol() const{
    return color == Color::White ? "R" : "r";
};
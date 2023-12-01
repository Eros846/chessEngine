#include "../piecesHeader/knight.hpp"

Knight::~Knight(){
}

Knight::Knight(Color col){
    color = col;
}

bool Knight::canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const{
    //To implement
    return true;
}

string Knight::getSymbol() const{
    return color == Color::White ? "N" : "n";
}
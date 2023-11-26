#include "../header/queen.hpp"

Queen::~Queen(){
}

Queen::Queen(Color col){
    color = col;
}

bool Queen::canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const{
    //To implement
    return true;
}

string Queen::getSymbol() const{
    return color == Color::White ? "Q" : "q";
}
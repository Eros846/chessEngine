#include "../header/bishop.hpp"

Bishop::~Bishop(){
}

Bishop::Bishop(Color col){
    color = col;
}

bool Bishop::canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const{
    //To implement
    return true;
}

string Bishop::getSymbol() const{
    return color == Color::White ? "B" : "b";
}
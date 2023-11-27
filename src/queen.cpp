#include "../header/queen.hpp"

Queen::~Queen(){
}

Queen::Queen(Color col){
    color = col;
}

bool Queen::canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const{
    //To implement
    // Check for a valid diagonal move
        // Path is obstructed
    // Check for a valid vertical or horizontal move
        // Path is obstructed   

    return false;
}



string Queen::getSymbol() const{
    return color == Color::White ? "Q" : "q";
}
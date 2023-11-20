#include "../header/square.hpp"

square::square(int r, int c) : row(r), col(c), pieceType(nullptr) {}

int square::getRow(){
    return row;
}

int square::getCol(){
    return col;
}

piece* square::getPiece(){
    return this->pieceType;
}

void square::setPiece(piece *p){
    pieceType = p;
}

bool square::isEmpty(){
    return this->pieceType == nullptr; 
}

void square::clearSquare(){
    pieceType = nullptr;
}

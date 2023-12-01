#include "../chessGameHeader/square.hpp"

Square::Square() : row(0), col(0), pieceType(nullptr) {}

Square::Square(int r, int c) : row(r), col(c), pieceType(nullptr) {}

int Square::getRow(){
   return row;
}

int Square::getCol(){
   return col;
}

Piece* Square::getPiece(){
   return this->pieceType.get();
}

void Square::setPiece(Piece* p){
   pieceType.reset(p);
}

bool Square::isEmpty(){
   return pieceType == nullptr;
}

void Square::clearSquare(){
   pieceType.reset(); 
}
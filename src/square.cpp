#include "../header/square.hpp"

Square::Square() : row(0), col(0), pieceType(nullptr) {}

Square::Square(int r, int c) : row(r), col(c), pieceType(nullptr) {}

int Square::getRow(){
   return row;
}

int Square::getCol(){
   return col;
}

Piece* Square::getPiece(){
   return this->pieceType;
}

void Square::setPiece(Piece* p){
   pieceType = p;
}

bool Square::isEmpty(){
   return pieceType == nullptr;
}

void Square::clearSquare(){
   pieceType = nullptr;
}
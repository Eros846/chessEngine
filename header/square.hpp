#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "piece.hpp"

class Square {
 private:
   Piece* pieceType;
   int row;
   int col;
   
 public:
   Square();
   Square(int r, int c);
   Piece* getPiece();
   bool isEmpty();
   void setPiece(Piece* p);
   void clearSquare();
   int getRow();
   int getCol();
};

#endif /* SQUARE_HPP */
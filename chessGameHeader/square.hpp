#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "../piecesHeader/piece.hpp"

#include <memory>

class Piece;

class Square {
 private:
   std::unique_ptr<Piece>pieceType;
   int row;
   int col;
   
 public:
   Square();
   Square(int r, int c);
   Piece& getPiece();
   bool isEmpty();
   void setPiece(std::unique_ptr<Piece> p);
   void clearSquare();
   int getRow();
   int getCol();
   std::unique_ptr<Piece> releasePiece();
};

#endif /* SQUARE_HPP */
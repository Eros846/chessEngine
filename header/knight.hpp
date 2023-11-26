#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include "piece.hpp"

class Knight : public Piece{
 private:

 public:
   ~Knight();
   Knight(Color col);
   bool canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const override;
   string getSymbol() const override;
};

#endif /* KNIGHT_HPP */ 
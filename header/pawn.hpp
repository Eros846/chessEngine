#ifndef PAWN_HPP
#define PAWN_HPP

#include "piece.hpp"

class Pawn : public Piece{
 private:

 public:
   ~Pawn();
   Pawn(Color col);
   bool canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const override;
   string getSymbol() const override;
};

#endif /* PAWN_HPP */ 
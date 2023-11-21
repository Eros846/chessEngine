#ifndef PAWN_HPP
#define PAWN_HPP

#include "piece.hpp"

class Pawn : public Piece{
 private:

 public:
   ~Pawn();
   Pawn(Square* pos, Color col);
   bool canMoveTo(Square* destination) const override;
   string getSymbol() const override;
};

#endif /* PAWN_HPP */ 
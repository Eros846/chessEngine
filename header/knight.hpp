#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include "piece.hpp"

class Knight : public Piece{
 private:

 public:
   ~Knight();
   Knight(Square* pos, Color col);
   bool canMoveTo(Square* destination) const override;
   string getSymbol() const override;
};

#endif /* KNIGHT_HPP */ 
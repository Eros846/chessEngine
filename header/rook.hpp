#ifndef ROOK_HPP
#define ROOK_HPP

#include "piece.hpp"

class Rook : public Piece{
 private:

 public:
   ~Rook();
   Rook(Square* pos, Color col);
   bool canMoveTo(Square* destination) const override;
   string getSymbol() const override;
};

#endif /* ROOK_HPP */
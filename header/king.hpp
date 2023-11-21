#ifndef KING_HPP
#define KING_HPP

#include "piece.hpp"

class King : public Piece{
 private:

 public:
   ~King();
   King(Square* pos, Color col);
   bool canMoveTo(Square* destination) const override;
   string getSymbol() const override;
};

#endif /* KING_HPP */
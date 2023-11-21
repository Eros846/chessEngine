#ifndef QUEEN_HPP
#define QUEEN_HPP

#include "piece.hpp"

class Queen : public Piece{
 private:

 public:
   ~Queen();
   Queen(Square* pos, Color col);
   bool canMoveTo(Square* destination) const override;
   string getSymbol() const override;
};

#endif /* QUEEN_HPP */
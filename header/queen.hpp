#ifndef QUEEN_HPP
#define QUEEN_HPP

#include "piece.hpp"

class Queen : public Piece{
 private:

 public:
   ~Queen();
   Queen(Color col);
   bool canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const override;

   string getSymbol() const override;
};

#endif /* QUEEN_HPP */
#ifndef ROOK_HPP
#define ROOK_HPP

#include "piece.hpp"

class Rook : public Piece{
 private:

 public:
   ~Rook();
   Rook(Color col);
   bool canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const override;
   string getSymbol() const override;
};

#endif /* ROOK_HPP */
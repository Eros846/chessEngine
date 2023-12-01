#ifndef KING_HPP
#define KING_HPP

#include "piece.hpp"

class King : public Piece{
 private:

 public:
   ~King();
   King(Color col);
   bool canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const override;
   string getSymbol() const override;
};

#endif /* KING_HPP */
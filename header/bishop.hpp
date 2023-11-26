#ifndef BISHOP_HPP
#define BISHOP_HPP

#include "piece.hpp"

class Bishop : public Piece{
 private:

 public:
   ~Bishop();
   Bishop(Color col);
   bool canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const override;
   string getSymbol() const override;
};
#endif /* BISHOP_HPP */
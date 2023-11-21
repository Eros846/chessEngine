#ifndef BISHOP_HPP
#define BISHOP_HPP

#include "piece.hpp"

class Bishop : public Piece{
 private:

 public:
   ~Bishop();
   Bishop(Square* pos, Color col);
   bool canMoveTo(Square* destination) const override;
   string getSymbol() const override;
};
#endif /* BISHOP_HPP */
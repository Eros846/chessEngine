#include "../header/piece.hpp"
#ifndef __PAWN_HPP__
#define __PAWN_HPP__

class Pawn : public Piece{
    public:
    //Constructor
    Pawn(int color);
    bool move();
};

#endif /* __PAWN_HPP__ */
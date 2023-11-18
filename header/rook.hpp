#include "../header/piece.hpp"
#ifndef __ROOK_HPP__
#define __ROOK_HPP__

class Rook : public Piece{
    public:
    //Constructor
    Rook(int color);
    bool move();
};

#endif /* __ROOK_HPP__ */
#include "../header/piece.hpp"
#ifndef __KNIGHT_HPP__
#define __KNIGHT_HPP__

class Knight : public Piece{
    public:
    //Constructor
    Knight(int color);
    bool move();
};

#endif /* __KNIGHT_HPP__ */ 
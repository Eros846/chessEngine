#include "../header/piece.hpp"
#ifndef __BISHOP_HPP__
#define __BISHOP_HPP__

class Bishop : public Piece{
    public:
        //Constructor
        Bishop(int color);
        bool move();
};

#endif /* __BISHOP_HPP__ */
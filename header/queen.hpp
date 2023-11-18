#include "../header/piece.hpp"
#ifndef __QUEEN_HPP__
#define __QUEEN_HPP__

class Queen : public Piece{
    public:
    //Constructor
    Queen(int color);
    bool move();
};

#endif /* __QUEEN_HPP__ */
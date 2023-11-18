#include "../header/piece.hpp"
#ifndef __KING_HPP__
#define __KING_HPP__

class King : public Piece{
    public:
        //Constructor
        King(int color);
        bool move();
};

#endif /* __KING_HPP__ */
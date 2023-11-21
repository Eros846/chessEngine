#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include "piece.hpp"

class knight : piece{
    private:

    public:

    ~knight();
    knight(square* pos, Color col);
    bool canMoveTo(square* destination) const override;
    string getSymbol() const override;

    
};

#endif /* KNIGHT_HPP */ 
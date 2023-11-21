#ifndef PAWN_HPP
#define PAWN_HPP

#include "piece.hpp"

class pawn : public piece{
    private:

    public:

    ~pawn();
    pawn(square* pos, Color col);
    bool canMoveTo(square* destination) const override;
    string getSymbol() const override;

    
};

#endif 
#ifndef BISHOP_HPP
#define BISHOP_HPP

#include "piece.hpp"

class bishop : public piece{
    private:

    public:

    ~bishop();
    bishop(square* pos, Color col);
    bool canMoveTo(square* destination) const override;
    string getSymbol() const override;

    
};
#endif /* BISHOP_HPP */
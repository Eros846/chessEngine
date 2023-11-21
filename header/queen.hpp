#ifndef QUEEN_HPP
#define QUEEN_HPP

#include "piece.hpp"

class queen : public piece{
    private:

    public:

    ~queen();
    queen(square* pos, Color col);
    bool canMoveTo(square* destination) const override;
    string getSymbol() const override;

    
};

#endif /* QUEEN_HPP */
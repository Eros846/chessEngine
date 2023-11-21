#ifndef ROOK_HPP
#define ROOK_HPP

#include "piece.hpp"

class rook : piece{
    private:

    public:

    ~rook();
    rook(square* pos, Color col);
    bool canMoveTo(square* destination) const override;
    string getSymbol() const override;

    
};

#endif /* ROOK_HPP */
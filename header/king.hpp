#ifndef KING_HPP
#define KING_HPP

#include "piece.hpp"

class king : piece{
    private:

    public:

    ~king();
    king(square* pos, Color col);
    bool canMoveTo(square* destination) const override;
    string getSymbol() const override;

    
};

#endif /* KING_HPP */
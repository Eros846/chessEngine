#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "piece.hpp"

class square {
    public:
    square(int r, int c); 
    piece* getPiece();
    bool isEmpty();
    void setPiece(piece* p);
    void clearSquare();
    int getRow();
    int getCol();
    
    private:
    piece pieceType;
    int row;
    int col;
};

#endif
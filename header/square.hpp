#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "piece.hpp"

class square {
    public:
    square(int row, int col, piece Piece); 
    piece getPiece();
    bool isEmpty();
    void setPiece(piece Piece);
    void clearSquare();
    
    private:
    piece Piece;
    int row;
    int col;
    
};

#endif
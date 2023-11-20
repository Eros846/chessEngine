#ifndef PIECE_HPP
#define PIECE_HPP

#include "square.hpp"
enum class Color {Black, White};

class piece{
    protected:
    square* position; 
    Color color; 

    public:
    piece(Square* pos, Color col);
    virtual ~Piece();
    virtual bool canMoveTo(Square* destination) const = 0;
    virtual string getSymbol() const = 0;
    Color getColor() const;
    Square* getPosition()const;
};

#endif 
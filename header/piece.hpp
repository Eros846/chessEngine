#ifndef PIECE_HPP
#define PIECE_HPP

#include "square.hpp"
#include <string>

using namespace std;
enum class Color {Black, White};

class piece{
    protected:
    square* position; 
    Color color; 

    public:
    piece(square* pos, Color col);
    virtual ~piece();
    virtual bool canMoveTo(square* destination) const = 0;
    virtual string getSymbol() const = 0;
    Color getColor() const;
    square* getPosition()const;
};

#endif 
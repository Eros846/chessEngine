#ifndef PIECE_HPP
#define PIECE_HPP

#include <string>

class square;

using namespace std;
enum class Color {Black, White, none};

class piece{
    protected:
    square* position; 
    Color color; 

    public:
    piece();
    piece(square* pos, Color col);
    virtual ~piece();
    virtual bool canMoveTo(square* destination) const = 0;
    virtual string getSymbol() const = 0;
    Color getColor() const;
    square* getPosition()const;
};

#endif 
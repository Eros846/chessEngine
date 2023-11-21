#ifndef PIECE_HPP
#define PIECE_HPP

#include <string>

class Square;

using namespace std;
enum class Color {Black, White, none};

class Piece{
    protected:
    Square* position; 
    Color color; 

    public:
    Piece();
    Piece(Square* pos, Color col);
    virtual ~Piece();
    virtual bool canMoveTo(Square* destination) const = 0;
    virtual string getSymbol() const = 0;
    Color getColor() const;
    Square* getPosition()const;
};

#endif /* PIECE_HPP */  
#ifndef PIECE_HPP
#define PIECE_HPP

#include "../chessGameHeader/chessGame.hpp"

#include <string>
#include <memory>


class chessBoard;

using namespace std;
enum class Color {Black, White, none};

class Piece{
    protected:
    Color color; 

    public:
    Piece();
    Piece(Color col);
    virtual ~Piece();
    virtual bool canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const = 0;
    virtual string getSymbol() const = 0;
    Color getColor() const;
   
};

#endif /* PIECE_HPP */  
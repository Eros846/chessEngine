#ifndef CHESSGAME_HPP
#define CHESSGAME_HPP

#include "chessBoard.hpp"
class chessBoard;

class chessGame{
    private:
    std::unique_ptr<chessBoard> board;

    public:
    chessGame();

};

#endif /* CHESSGAME_HPP */
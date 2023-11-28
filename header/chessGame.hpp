#ifndef CHESSGAME_HPP
#define CHESSGAME_HPP

#include "chessBoard.hpp"

class chessGame{
    private:
    chessBoard Chessboard;
    public:
    void startGame();
    bool makeMove();
    void checkGameStatus();
    void getGameHistory();
};

#endif /* CHESSGAME_HPP */
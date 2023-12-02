#ifndef CHESSGAME_HPP
#define CHESSGAME_HPP

#include <vector>
#include <string> 

#include "chessBoard.hpp"

class chessBoard;

enum class gameStatus {IN_PROGRESS, CHECKMATE, DRAW, STALEMATE};

using namespace std;

class chessGame{
    private:
    std::unique_ptr<chessBoard> board;
    std::pair<int, int> whiteKingPosition;
    std::pair<int, int> blackKingPosition;
    vector<string> moves;
    

    public:
    chessGame();
    
    void startGame();
    void makeMove(int sourceX, int sourceY, int targetX, int targetY, bool white);
    void updateGameStatus();
    gameStatus getGameStatus() const;
    void addMoves(int col, int row);
    void printMoveHistory();
    string getStringOfMove(int targetX, int targetY) const;

    //void updateKingPosition(Color color, int x, int y);




};

#endif /* CHESSGAME_HPP */
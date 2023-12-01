#include "../header/chessGame.hpp"

chessGame::chessGame()
{
}

chessGame::chessGame startGame()
{
    Chessboard.displayBoard();
}

chessGame::chessGame makeMove()
{
    if(checkGameStatus())
    {
        //let user name move
    }
    else {
        //game is over (implement game shutdown, checkmate and stalemate outputs, draw/resign prompts)
    }
}

chessGame::chessGame checkGameStatus() //helper to makeMove
{
    while(gameStatus)
    {
        return true;
    }
    else
    {
        return false;
    }
}

chessGame::chessGame getGameHistory()
{
    //print turn history to console using chess notation
    //impliment later, possibly after the undo option to avoid implementation bugs
}
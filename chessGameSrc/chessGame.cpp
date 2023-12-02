#include "../chessGameHeader/chessGame.hpp"
#include <iostream>


//     private:
//     std::unique_ptr<chessBoard> board;
//     std::pair<int, int> whiteKingPosition;
//     std::pair<int, int> blackKingPosition;
//     vector<string> moves;




//     chessGame();
chessGame::chessGame() : board(std::make_unique<chessBoard>()){
   whiteKingPosition.first = 7;
   whiteKingPosition.second = 4;


   blackKingPosition.first = 0;
   blackKingPosition.second = 4;


}


//     void startGame();
void chessGame::startGame(){
   board.get()->setupBoard();
   board.get()->displayBoard();
}


//     void makeMove(int sourceX, int sourceY, int targetX, int targetY);


void chessGame::makeMove(int sourceX, int sourceY, int targetX, int targetY, bool white){
  




   Piece* sourcePiece = board.get()->getSquare(sourceX, sourceY)->getPiece();
   Piece* targetPiece = board.get()->getSquare(targetX, targetY)->getPiece();


   if(white){
       // check color
   }




   if(sourcePiece == nullptr){
       cout << "There is no piece to make a move. Please check your board." << endl;
       lastMove = false;
   }


   if (targetPiece != nullptr && targetPiece->getColor() == sourcePiece->getColor()){
       cout << "Can't capture piece of the same color. Please refer to rules" << endl;
       lastMove = false;
       return;
   }


   if(white){
       //implement white king's function
   }
   else {
       //implement black king's function
   }


   if(sourcePiece->getSymbol() == "P" || sourcePiece->getSymbol() == "p" ){
  
       if(board.get()->EnPassantPossible(sourceX, sourceY, targetX, targetY)){
           board.get()->perfomEnPassant(sourceX, sourceY, targetX, targetY);
           moves.push_back(getStringOfMove(targetX, targetY));
           lastMove = true;
           return;
       }
       if(board.get()->pawnPromotionPossible(sourceX, sourceY, targetX, targetY)){
           board.get()->performPawnPromotion(sourceX, sourceY, targetX, targetY);
           moves.push_back(getStringOfMove(targetX, targetY));
           lastMove = true;
           return;
       }




   }
  






}


string chessGame::getStringOfMove(int targetX, int targetY) const {
   return "function hasn't been setup";
}




//     void updateGameStatus();


void chessGame::updateGameStatus(){


}


//     gameStatus getGameStatus() const;






gameStatus chessGame::getGameStatus() const {
   return gameStatus::IN_PROGRESS;
}


//     void addMoves(int col, int row);


void chessGame::addMoves(int col, int row){
  
}


//     void printMoveHistory();


void chessGame::printMoveHistory(){


}


bool chessGame::moveSucess(){
   return this->lastMove;
}










// class chessGame{
//     private:
//     std::unique_ptr<chessBoard> board;
//     std::pair<int, int> whiteKingPosition;
//     std::pair<int, int> blackKingPosition;
//     vector<string> moves;

#include "../header/chessBoard.hpp"
#include "../header/pawn.hpp"
#include "../header/bishop.hpp"
#include "../header/king.hpp"
#include "../header/queen.hpp"
#include "../header/knight.hpp"
#include "../header/rook.hpp"

#include <iostream>
using namespace std;

chessBoard::chessBoard() {
   for (int i = 0; i < 8; ++i){
       for (int j = 0; j < 8; ++j){
           board[i][j] = new Square(i, j);
       }
   }
}

chessBoard::~chessBoard(){


}

Square* chessBoard::getSquare(int row, int col) {
   if (row >= 0 && row < 8 && col >= 0 && col < 8){
       return board[row][col];
   }

   else{
       return nullptr;
   }
}

void chessBoard::setupBoard(){
    //setup black side
    board[0][0]->setPiece(new Rook(board[0][0], Color::Black));
    board[0][1]->setPiece(new Knight(board[0][1], Color::Black));
    board[0][2]->setPiece(new Bishop(board[0][2], Color::Black));
    board[0][3]->setPiece(new Queen(board[0][3], Color::Black));
    board[0][4]->setPiece(new King(board[0][4], Color::Black));
    board[0][5]->setPiece(new Bishop(board[0][5], Color::Black));
    board[0][6]->setPiece(new Knight(board[0][6], Color::Black));
    board[0][7]->setPiece(new Rook(board[0][7], Color::Black));

    for (int i = 0; i < 8; ++i){
        board[1][i]->setPiece(new Pawn(board[1][i], Color::Black));
    }

    //setup white side
    board[7][0]->setPiece(new Rook(board[7][0], Color::White));
    board[7][1]->setPiece(new Knight(board[7][1], Color::White));
    board[7][2]->setPiece(new Bishop(board[7][2], Color::White));
    board[7][3]->setPiece(new Queen(board[7][3], Color::White));
    board[7][4]->setPiece(new King(board[7][4], Color::White));
    board[7][5]->setPiece(new Bishop(board[7][5], Color::White));
    board[7][6]->setPiece(new Knight(board[7][6], Color::White));
    board[7][7]->setPiece(new Rook(board[7][7], Color::White));

    for (int j = 0; j < 8; ++j){
        board[6][j]->setPiece(new Pawn(board[6][j], Color::White));
    }
}

void chessBoard::displayBoard(){
    setupBoard();
    cout << endl;
    cout << "   a b c d e f g h" << endl;
    cout << endl;
    for (int i = 0; i < 8; ++i){
        cout << 8 - i << "  ";
       for (int j = 0; j < 8; ++j){
           Square* currSquare = board[i][j];
           Piece* currPiece = currSquare->getPiece();

           if (currPiece != nullptr){
               cout << currPiece->getSymbol() << " ";
           }

           else{
               cout << "x ";
           }
       }
       cout << " " << 8 - i;
       cout << endl;
   }
   cout << endl;
   cout << "   a b c d e f g h" << endl;
   cout << endl;
}
#include "../chessGameHeader/chessBoard.hpp"
#include "../piecesHeader/pawn.hpp"
#include "../piecesHeader/bishop.hpp"
#include "../piecesHeader/king.hpp"
#include "../piecesHeader/queen.hpp"
#include "../piecesHeader/knight.hpp"
#include "../piecesHeader/rook.hpp"

#include <iostream>
using namespace std;

chessBoard::chessBoard() {
   for (int i = 0; i < 8; ++i){
       for (int j = 0; j < 8; ++j){
           board[i][j] = make_unique<Square>();
       }
   }
}

// chessBoard::~chessBoard(){


// }

Square* chessBoard::getSquare(int row, int col) const {
   if (row >= 0 && row < 8 && col >= 0 && col < 8){
       return board[row][col].get();
   }

   else{
       return nullptr;
   }
}

void chessBoard::setupBoard(){
    //setup black side
    board[0][0]->setPiece(new Rook(Color::Black));
    board[0][1]->setPiece(new Knight(Color::Black));
    board[0][2]->setPiece(new Bishop(Color::Black));
    board[0][3]->setPiece(new Queen(Color::Black));
    board[0][4]->setPiece(new King(Color::Black));
    board[0][5]->setPiece(new Bishop(Color::Black));
    board[0][6]->setPiece(new Knight(Color::Black));
    board[0][7]->setPiece(new Rook(Color::Black));

    for (int i = 0; i < 8; ++i){
        board[1][i]->setPiece(new Pawn(Color::Black));
    }

    //setup white side
    board[7][0]->setPiece(new Rook(Color::White));
    board[7][1]->setPiece(new Knight(Color::White));
    board[7][2]->setPiece(new Bishop(Color::White));
    board[7][3]->setPiece(new Queen(Color::White));
    board[7][4]->setPiece(new King(Color::White));
    board[7][5]->setPiece(new Bishop(Color::White));
    board[7][6]->setPiece(new Knight(Color::White));
    board[7][7]->setPiece(new Rook(Color::White));

    for (int j = 0; j < 8; ++j){
        board[6][j]->setPiece(new Pawn(Color::White));
    }
}


void chessBoard::displayBoard(){
    // setupBoard();
    cout << endl;
    cout << "   a b c d e f g h" << endl;
    cout << endl;
    for (int i = 0; i < 8; ++i){
        cout << 8 - i << "  ";
       for (int j = 0; j < 8; ++j){
           Square* currSquare = board[i][j].get();
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

void chessBoard::displayBoardFromBlackSide(){
    cout << endl;
    cout << "   h g f e d c b a" << endl; // Reverse the order of columns
    cout << endl;
    for (int i = 7; i >= 0; --i) { // Start from the last row
        cout << i + 1 << "  "; // Row numbers
        for (int j = 7; j >= 0; --j) { // Start from the last column
            Square* currSquare = board[i][j].get();
            Piece* currPiece = currSquare->getPiece();

            if (currPiece != nullptr) {
                cout << currPiece->getSymbol() << " ";
            } else {
                cout << "x ";
            }
        }
        cout << " " << i + 1;
        cout << endl;
    }
    cout << endl;
    cout << "   h g f e d c b a" << endl; // Reverse the order of columns
    cout << endl;
}

void chessBoard::movePiece(int sourceX, int sourceY, int targetX, int targetY){
    Piece* toMovePiece = this->getSquare(sourceX, sourceY)->getPiece();
    this->getSquare(targetX, targetY)->setPiece(toMovePiece);
    this->getSquare(sourceX, sourceY)->clearSquare();
    displayBoard();
}

void chessBoard::capture(int sourceX, int sourceY, int targetX, int targetY){
    //To implement
}


bool chessBoard::EnPassantPossible(int sourceX, int sourceY, int targetX, int targetY){
    //To implement
    return false;
}

void chessBoard::perfomEnPassant(int sourceX, int sourceY, int targetX, int targetY) {
    //To implement
}

bool chessBoard::pawnPromotionPossible(int sourceX, int sourceY, int targetX, int targetY){
    //To implement
    return false;
}

void chessBoard::performPawnPromotion(int sourceX, int sourceY, int targetX, int targetY){
    //To implement
}

bool chessBoard::willRemoveCheck(int sourceX, int sourceY, int targetX, int targetY, int kingX, int kingY) const{
    //To implement
    return true;
}
bool chessBoard::willKingGetChecked(int sourceX, int sourceY, int targetX, int targetY, int kingX, int kingY) const{
    //To implement
    return false;
}
bool chessBoard::isKingChecked(int sourceX, int sourceY, int targetX, int targetY, int kingX, int kingY) const {
    //To implement
    return false;
}


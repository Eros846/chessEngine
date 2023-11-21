#ifndef CHESSBOARD_HPP
#define CHESSBOARD_HPP

#include "square.hpp"

class chessBoard : public Square{
private:
  Square* board[8][8];

public:
  chessBoard();
  ~chessBoard();
  Square* getSquare(int row, int col);
  void displayBoard();
  void setupBoard();
};


#endif /* CHESSBOARD_HPP */
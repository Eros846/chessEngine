#ifndef CHESSBOARD_HPP
#define CHESSBOARD_HPP

#include <memory>
#include "square.hpp"

class Square;
class chessBoard{
private:
  std::unique_ptr<Square> board[8][8];

public:
  chessBoard();
  ~chessBoard();
  Square* getSquare(int row, int col);
  void displayBoard();
  void setupBoard();

  //newFunction
  void movePiece(int sourceX, int sourceY, int targetX, int targetY);
};


#endif /* CHESSBOARD_HPP */
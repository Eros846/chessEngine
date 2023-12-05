#ifndef CHESSBOARD_HPP
#define CHESSBOARD_HPP

#include <memory>
#include "square.hpp"

class Square;

// enum class Color {Black, White, none};

class chessBoard{
private:
  std::unique_ptr<Square> board[8][8];

public:
  chessBoard();
  ~chessBoard();
  Square* getSquare(int row, int col) const;
  void displayBoard();
  void setupBoard();

  //newFunction
  void movePiece(int sourceX, int sourceY, int targetX, int targetY);
  void capture(int sourceX, int sourceY, int targetX, int targetY);

  

  //additional functions for pawn 
  bool EnPassantPossible(int sourceX, int sourceY, int targetX, int targetY);
  void perfomEnPassant(int sourceX, int sourceY, int targetX, int targetY);
  bool pawnPromotionPossible(int sourceX, int sourceY, int targetX, int targetY);
  void performPawnPromotion(int sourceX, int sourceY, int targetX, int targetY);


  //additional functions for king
  bool willRemoveCheck(int sourceX, int sourceY, int targetX, int targetY, int kingX, int kingY) const ;
  bool willKingGetChecked(int sourceX, int sourceY, int targetX, int targetY, int kingX, int kingY) const ;
  bool isKingChecked(int sourceX, int sourceY, int targetX, int targetY, int kingX, int kingY) const ;


};


#endif /* CHESSBOARD_HPP */
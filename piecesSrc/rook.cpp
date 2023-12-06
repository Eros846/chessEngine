#include "../piecesHeader/rook.hpp"

Rook::~Rook(){
}

Rook::Rook(Color col){
    color = col;
}

bool Rook::canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const{
    //Rooks only move horizontally or vertically
   if ((sourceX != targetX) && (sourceY != targetY)) {
       return false; // Not moving either way
   }

   // Find the direction of the move
   int deltaX, deltaY;

   if (targetX > sourceX){
       deltaX = 1;
   }

   else if (targetX < sourceX){
       deltaX = -1;
   }

   else{
       deltaX = 0;
   }

   if (targetY > sourceY){
       deltaY = 1;
   }

   else if (targetY < sourceY){
       deltaY = -1;
   }

   else{
       deltaY = 0;
   }

   // Check each square along the path
   int x = sourceX + deltaX;
   int y = sourceY + deltaY;
   while (x != targetX || y != targetY) {
       if (!board.getSquare(x, y)->isEmpty()) {
           return false; // Path is obstructed
       }
       x += deltaX;
       y += deltaY;
   }
   
   return true; // Path is clear, move is valid
}

string Rook::getSymbol() const{
    return color == Color::White ? "R" : "r";
};
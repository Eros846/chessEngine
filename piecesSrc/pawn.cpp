#include "../piecesHeader/pawn.hpp"

Pawn::~Pawn(){
}

Pawn::Pawn(Color col){
    color = col;
}

bool Pawn::canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const{
    int deltaX = abs(targetX - sourceX);
    int deltaY = abs(targetY - sourceY);
    // Determine whether pawn is white or black in order to determine movement
    int direction;

    //Checks if pawn can move one space forward
    if (deltaX == 1 && deltaY == 0 && board.getSquare(targetX, targetY).isEmpty()) {
        return true;
    }

    //If first move then pawn can move two spaces forward
    if (deltaX == 2 && deltaY == 0 && sourceX == 1 && direction == 1 && board.getSquare(sourceX + 1, sourceY).isEmpty() && board.getSquare(targetX, targetY).isEmpty()) {
        return true;
    }
    if (deltaX == 2 && deltaY == 0 && sourceX == 6 && direction == -1 && board.getSquare(sourceX - 1, sourceY).isEmpty() && board.getSquare(targetX, targetY).isEmpty()) {
        return true;
    }

    return false; //Pawn cannot move
}

string Pawn::getSymbol() const{
    return color == Color::White ? "P" : "p";
}
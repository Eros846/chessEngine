#include "../piecesHeader/king.hpp"

King::~King(){
}

King::King(Color col){
    color = col;
}

bool King::canMoveTo(int sourceX, int sourceY, int targetX, int targetY, const chessBoard& board) const{
    // Calculate the differences in x and y coordinates
    int deltaX = abs(targetX - sourceX);
    int deltaY = abs(targetY - sourceY);

    // The king moves one square in any direction
    bool isOneSquareMove = (deltaX <= 1 && deltaY <= 1);

    // Check that the move is a one-square move and not to the same square it's already on
    if (isOneSquareMove && (deltaX != 0 || deltaY != 0)) {
        // check the target square is not occupied by a piece of the same color
        Piece* targetPiece = &board.getSquare(targetX, targetY).getPiece();
        if (targetPiece == nullptr || targetPiece->getColor() != this->getColor()) {
            return true; // move is valid
        }
    }

    // If not a one-square move, it's invalid
    return false;
}

string King::getSymbol() const{
    return color == Color::White ? "K" : "k";
}

/* 
1) User enters a move 
2) The move is validated first 
3) The target square is checked for a piece, if there is no piece just move it there
   If target square has piece, then it'll invoke the capture method 
4) Capture method just stores the information that it was deleted and deletes piece from the current square. 
5) Logic to detect checkmate (king in check, no legal moves to escape) //isCheckMate

*/


/* 
2) A move class that has virutal function for finding valid moves.
It'll be composed up of chessboard class aswell. 
It'll pass in the chessboard, source square, target square as parameter.
and then each piece will also inherit from that move class implementing the boolvalidmove() function on their own.

*/

//need bool willGetChecked function

/* 

Valid moves function;
One function for move as of the empty board on the given square.
//Suppose I stored that in a array/vectors 
//if the move requested is not in the array/vectors return false.
//One function for move as the king is currently on check. 
//If on check wil it remove the check // calls willRemoveCheck() if false return invalid move. 
//Need to check if the move requested is in willGetCheckedMethod() if yes return invalid move. 
//Check if their path to destination square in unobstructed if yes return invalid move.
//return true. 



/*
isKingChecked()
//this function will set the flag of checkMate if it detects no more possible moves. 
*/

/*
willRemoveCheck()

*/

/*
willGetCheckedMethod()

*/


/*
Guideslines for pieces expect pawn and king
1)Ensure that your own king is not in check as a result of the move (bool willGetChecked).
2)Ensure that our king is not in check, if it is check that if that current move will defend the king through valid move
  and remove check otherwise invalid the move. 
2)If the move entered is a valid move aka the piece as if the piece was in an empty board.
3)Ensure that their path to the destination square is unobstructed
*/


/* 
Kings Valid move
- one front and one back 
- one left and right
- one left diagonal and one back
- one right diagonal and back 


Queens Valid move 
- front and back 
- left and right
- left diagonal and back
- right diagonal and back 

Bishop 
- left diagonal and back
- right diagonal and back 

*/



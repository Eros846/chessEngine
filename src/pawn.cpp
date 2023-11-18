#include "../header/pawn.hpp"

//Creates a pawn piece and gives it the correct color and symbol
Pawn::Pawn(int color){
    //Sets a black pawn denoted by 'p' and color being 0
    if (color == 0){
        Piece('p', color);
    }

    //Sets a white pawn denoted by 'P' and color being 1
    else{
        Piece('P', color);
    }
}

bool Pawn::move()
{
  
}
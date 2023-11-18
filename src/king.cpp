#include "../header/king.hpp"

//Creates a king piece and gives it the correct color and symbol
King::King(int color){
    //Sets a black king denoted by 'k' and color being 0
    if (color == 0){
        Piece('k', color);
    }

    //Sets a white king denoted by 'K' and color being 1
    else{
        Piece('K', color);
    }
}

bool King::move()
{
  
}
#include "../header/rook.hpp"

//Creates a rook piece and gives it the correct color and symbol
Rook::Rook(int color){
    //Sets a black rook denoted by 'r' and color being 0
    if (color == 0){
        Piece('r', color);
    }

    //Sets a white rook denoted by 'R' and color being 1
    else{
        Piece('R', color);
    }
}

bool Rook::move()
{
  
}
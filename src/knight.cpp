#include "../header/knight.hpp"

//Creates a knight piece and gives it the correct color and symbol
Knight::Knight(int color){
    //Sets a black knight denoted by 'n' and color being 0
    if (color == 0){
        Piece('n', color);
    }

    //Sets a white knight denoted by 'N' and color being 1
    else{
        Piece('N', color);
    }
}

bool Knight::move()
{
  
}
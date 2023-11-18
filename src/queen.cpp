#include "../header/queen.hpp"

//Creates a queen piece and gives it the correct color and symbol
Queen::Queen(int color){
    //Sets a black queen denoted by 'q' and color being 0
    if (color == 0){
        Piece('q', color);
    }

    //Sets a white queen denoted by 'q' and color being 1
    else{
        Piece('Q', color);
    }
}

bool Queen::move()
{
  
}
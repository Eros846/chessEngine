#include "../header/bishop.hpp"

//Creates a bishop piece and gives it the correct color and symbol
Bishop::Bishop(int color){
    //Sets a black bishop denoted by 'b' and color being 0
    if (color == 0){
        Piece('b', color);
    }

    //Sets a white bishop denoted by 'B' and color being 1
    else{
        Piece('B', color);
    }
}

bool Bishop::move()
{
  
}
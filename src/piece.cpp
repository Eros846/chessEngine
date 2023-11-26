#include "../header/piece.hpp"

Piece::Piece(){
    color = Color::none;
}

Piece::Piece(Color col){
    color = col;
}

Piece::~Piece() {
}

Color Piece::getColor() const{
    return color;
}

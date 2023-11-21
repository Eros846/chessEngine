#include "../header/piece.hpp"

Piece::Piece(){
    position = nullptr;
    color = Color::none;
}

Piece::Piece(Square* pos, Color col){
    position = pos;
    color = col;
}

Piece::~Piece() {
}

Color Piece::getColor() const{
    return color;
}

Square* Piece::getPosition()const{
    return position;
}
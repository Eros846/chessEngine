#include "../header/piece.hpp"

piece::piece(){
    position = nullptr;
    color = Color::none;
}
piece::piece(square* pos, Color col){
    position = pos;
    color = col;
}

Color piece::getColor() const{
    return color;
}

square* piece::getPosition()const{
    return position;
}

piece::~piece() {
}

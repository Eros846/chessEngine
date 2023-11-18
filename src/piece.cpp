#include "../header/piece.hpp"

//Default construtor sets pieceType to 'x' and color to white
Piece::Piece() : pieceType('x'), color(1) {}

//Construcor
Piece::Piece(char pieceType, int color) : pieceType(pieceType), color(color) {}

bool Piece::move()
{
  
}
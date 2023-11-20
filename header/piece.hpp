#ifndef __PIECE_HPP__
#define __PIECE_HPP__

class Piece{
    private:
        char pieceType; //holds the type of piece
        int color; //color of the piece

    public:
        //Default constructor
        Piece();
        //Constructor that takes in both pieceType and color
        Piece(char pieceType, int color);
        bool move();
};

#endif /* __PIECE_HPP__ */
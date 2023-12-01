CMAKE_MINIMUM_REQUIRED(VERSION 2.8...3.13)
project(chessGame)

ADD_EXECUTABLE(playChess

    piecesSrc/bishop.cpp
    chessGameSrc/chessBoard.cpp
    piecesSrc/king.cpp
    piecesSrc/knight.cpp
    chessGameSrc/main.cpp
    piecesSrc/pawn.cpp
    piecesSrc/piece.cpp
    piecesSrc/queen.cpp
    piecesSrc/rook.cpp
    chessGameSrc/square.cpp
    chessGameSrc/chessGame.cpp 
    
)



CMAKE_MINIMUM_REQUIRED(VERSION 2.8...3.13)
project(chessGame)

ADD_EXECUTABLE(playChess
    src/bishop.cpp
    src/chessBoard.cpp
    src/king.cpp
    src/knight.cpp
    src/main.cpp
    src/pawn.cpp
    src/piece.cpp
    src/queen.cpp
    src/rook.cpp
    src/square.cpp
)

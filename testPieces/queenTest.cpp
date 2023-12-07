#include <iostream>
#include "gtest/gtest.h"

#include "../piecesHeader/queen.hpp"
#include "../chessGameHeader/chessBoard.hpp"

//3 Constructor Tests
TEST(QueenTests, testConstructorWhite)
{
    Queen* queen1 = new Queen(Color::White);
    EXPECT_TRUE(queen1->getColor() == Color::White);
}

TEST(QueenTests, testConstructorBlack)
{
    Queen* queen1 = new Queen(Color::Black);
    EXPECT_EQ(queen1->getColor(), Color::Black);
}

TEST(QueenTests, testConstructorNone)
{
    Queen* queen1 = new Queen(Color::none);
    ASSERT_TRUE(queen1->getColor() == Color::none);
}

//canMove Tests
// TEST(QueenTests, testCanMoveForwardRight)
// {
//     unique_ptr<Piece> queen1 = make_unique<Queen>(Color::White);
//     chessBoard* board = new chessBoard();
//     board->getSquare(7, 3).setPiece(move(queen1));

//     EXPECT_EQ(board->getSquare(7, 3).getPiece().canMoveTo(7, 3, 6, 4, *board), true);
// }

// TEST(QueenTests, testCanMoveForwardLeft)
// {
//     unique_ptr<Piece> queen1 = make_unique<Queen>(Color::White);
//     chessBoard* board = new chessBoard();
//     board->getSquare(7, 3).setPiece(move(queen1));

//     ASSERT_TRUE(board->getSquare(7, 3).getPiece().canMoveTo(7, 3, 6, 2, *board) == true);
// }

// TEST(QueenTests, testCanMoveForwardRightMultipleSpaces)
// {
//     unique_ptr<Piece> queen1 = make_unique<Queen>(Color::White);
//     chessBoard* board = new chessBoard();
//     board->getSquare(7, 3).setPiece(move(queen1));

//     EXPECT_TRUE(board->getSquare(7, 3).getPiece().canMoveTo(7, 3, 3, 7, *board) == true);
// }

// TEST(QueenTests, testCanMoveForwardLefttMultipleSpaces)
// {
//     unique_ptr<Piece> queen1 = make_unique<Queen>(Color::White);
//     chessBoard* board = new chessBoard();
//     board->getSquare(5, 4).setPiece(move(queen1));

//     EXPECT_EQ(board->getSquare(5, 4).getPiece().canMoveTo(5, 4, 3, 2, *board), true);
// }

// TEST(QueenTests, testCanMoveWithPieceInTheWay)
// {
//     unique_ptr<Piece> queenWhite = make_unique<Queen>(Color::White);
//     unique_ptr<Piece> queenBlack = make_unique<Queen>(Color::Black);
//     chessBoard* board = new chessBoard();
//     board->getSquare(7, 3).setPiece(move(queenWhite));
//     board->getSquare(4, 3).setPiece(move(queenBlack));

//     EXPECT_EQ(board->getSquare(7, 3).getPiece().canMoveTo(7, 3, 2, 3, *board), false);
// }

// TEST(QueenTests, testCanMoveUp)
// {
//     unique_ptr<Piece> queen1 = make_unique<Queen>(Color::Black);
//     chessBoard* board = new chessBoard();
//     board->getSquare(5, 1).setPiece(move(queen1));

//     EXPECT_TRUE(board->getSquare(5, 1).getPiece().canMoveTo(5, 1, 2, 1, *board) == true);
// }

// TEST(QueenTests, testCanMoveHortizontal)
// {
//     unique_ptr<Piece> queen1 = make_unique<Queen>(Color::Black);
//     chessBoard* board = new chessBoard();
//     board->getSquare(4, 3).setPiece(move(queen1));

//     EXPECT_TRUE(board->getSquare(4, 3).getPiece().canMoveTo(4, 3, 4, 6, *board) == true);
// }

// TEST(QueenTests, testCanMoveBackwards)
// {
//     unique_ptr<Piece> queen1 = make_unique<Queen>(Color::Black);
//     chessBoard* board = new chessBoard();
//     board->getSquare(5, 3).setPiece(move(queen1));

//     EXPECT_TRUE(board->getSquare(5, 3).getPiece().canMoveTo(5, 3, 7, 3, *board) == true);
// }

TEST(QueenTests, testCanMoveBadDiagonal)
{
    unique_ptr<Piece> queen1 = make_unique<Queen>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 0).setPiece(move(queen1));

    EXPECT_EQ(board->getSquare(7, 0).getPiece().canMoveTo(7, 0, 3, 1, *board), false);
}

TEST(QueenTests, testCanMoveBadDiagonal2)
{
    unique_ptr<Piece> queen1 = make_unique<Queen>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 0).setPiece(move(queen1));

    EXPECT_EQ(board->getSquare(7, 0).getPiece().canMoveTo(7, 0, 3, 5, *board), false);
}

//getSymbol Tests
TEST(QueenTests, testGetSymbolWhite)
{
    Queen* queen1 = new Queen(Color::White);
    ASSERT_TRUE(queen1->getSymbol() == "Q");
}

TEST(QueenTests, testGetSymbolBlack)
{
    Queen* queen1 = new Queen(Color::Black);
    EXPECT_EQ(queen1->getSymbol(), "q");
}

TEST(QueenTests, testGetSymbolWrongInput)
{
    Queen* queen1 = new Queen(Color::White);
    ASSERT_FALSE(queen1->getSymbol() == "q");
}
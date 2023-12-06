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
TEST(QueenTests, testCanMoveForwardRight)
{
    Queen* queen1 = new Queen(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 3)->setPiece(queen1);

    EXPECT_EQ(queen1->canMoveTo(7, 3, 6, 4, *board), true);
}

TEST(QueenTests, testCanMoveForwardLeft)
{
    Queen* queen1 = new Queen(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 3)->setPiece(queen1);

    ASSERT_TRUE(queen1->canMoveTo(7, 3, 6, 2, *board) == true);
}

TEST(QueenTests, testCanMoveForwardRightMultipleSpaces)
{
    Queen* queen1 = new Queen(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 3)->setPiece(queen1);

    EXPECT_TRUE(queen1->canMoveTo(7, 3, 3, 7, *board) == true);
}

TEST(QueenTests, testCanMoveForwardLefttMultipleSpaces)
{
    Queen* queen1 = new Queen(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(5, 4)->setPiece(queen1);

    EXPECT_EQ(queen1->canMoveTo(5, 4, 3, 2, *board), true);
}

TEST(QueenTests, testCanMoveWithPieceInTheWay)
{
    Queen* queenWhite = new Queen(Color::White);
    Queen* queenBlack = new Queen(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 3)->setPiece(queenWhite);
    board->getSquare(4, 3)->setPiece(queenBlack);

    ASSERT_FALSE(queenWhite->canMoveTo(7, 3, 2, 3, *board) == true);
}

TEST(QueenTests, testCanMoveUp)
{
    Queen* queen1 = new Queen(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(5, 1)->setPiece(queen1);

    EXPECT_TRUE(queen1->canMoveTo(5, 1, 2, 1, *board) == true);
}

TEST(QueenTests, testCanMoveHortizontal)
{
    Queen* queen1 = new Queen(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(4, 3)->setPiece(queen1);

    EXPECT_TRUE(queen1->canMoveTo(4, 3, 4, 6, *board) == true);
}

TEST(QueenTests, testCanMoveBackwards)
{
    Queen* queen1 = new Queen(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(5, 3)->setPiece(queen1);

    EXPECT_TRUE(queen1->canMoveTo(5, 3, 7, 3, *board) == true);
}

TEST(QueenTests, testCanMoveBadDiagonal)
{
    Queen* queen1 = new Queen(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 0)->setPiece(queen1);

    EXPECT_FALSE(queen1->canMoveTo(7, 0, 3, 1, *board) == true);
}

TEST(QueenTests, testCanMoveBadDiagonal2)
{
    Queen* queen1 = new Queen(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 0)->setPiece(queen1);

    EXPECT_FALSE(queen1->canMoveTo(7, 0, 3, 5, *board) == true);
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
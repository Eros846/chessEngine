#include <iostream>
#include "gtest/gtest.h"

#include "../piecesHeader/knight.hpp"
#include "../chessGameHeader/chessBoard.hpp"

//3 Constructor Tests
TEST(KnightTests, testConstructorWhite)
{
    Knight* knight1 = new Knight(Color::White);
    EXPECT_TRUE(knight1->getColor() == Color::White);
}

TEST(KnightTests, testConstructorBlack)
{
    Knight* knight1 = new Knight(Color::Black);
    EXPECT_EQ(knight1->getColor(), Color::Black);
}

TEST(KnightTests, testConstructorNone)
{
    Knight* knight1 = new Knight(Color::none);
    ASSERT_TRUE(knight1->getColor() == Color::none);
}

//canMove Tests
TEST(KnightTests, testCanMoveRight)
{
    Knight* knight1 = new Knight(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 6)->setPiece(knight1);

    EXPECT_EQ(knight1->canMoveTo(7, 6, 5, 7, *board), true);
}

TEST(KnightTests, testCanMoveLeft)
{
    Knight* knight1 = new Knight(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 6)->setPiece(knight1);

    ASSERT_TRUE(knight1->canMoveTo(7, 6, 5, 5, *board) == true);
}

TEST(KnightTests, testCanMoveLeftBack)
{
    Knight* knight1 = new Knight(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(5, 5)->setPiece(knight1);

    ASSERT_TRUE(knight1->canMoveTo(5, 5, 7, 4, *board) == true);
}

TEST(KnightTests, testCanMoveRightBack)
{
    Knight* knight1 = new Knight(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(5, 5)->setPiece(knight1);

    EXPECT_TRUE(knight1->canMoveTo(5, 5, 7, 6, *board) == true);
}

TEST(KnightTests, testCanMoveWithPieceInTheWay)
{
    Knight* knightWhite = new Knight(Color::White);
    Knight* knightWhite2 = new Knight(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 6)->setPiece(knightWhite);
    board->getSquare(5, 7)->setPiece(knightWhite2);

    EXPECT_EQ(knightWhite->canMoveTo(7, 6, 5, 7, *board), false);
}

//getSymbol Tests
TEST(KnightTests, testGetSymbolWhite)
{
    Knight* knight1 = new Knight(Color::White);
    ASSERT_TRUE(knight1->getSymbol() == "N");
}

TEST(KnightTests, testGetSymbolBlack)
{
    Knight* knight1 = new Knight(Color::Black);
    EXPECT_EQ(knight1->getSymbol(), "n");
}

TEST(KnightTests, testGetSymbolWrongInput)
{
    Knight* knight1 = new Knight(Color::White);
    ASSERT_FALSE(knight1->getSymbol() == "n");
}
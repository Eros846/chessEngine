#include <iostream>
#include "gtest/gtest.h"

#include "../piecesHeader/rook.hpp"

//3 Constructor Tests
TEST(RookTests, testConstructorWhite)
{
    Rook* rook1 = new Rook(Color::White);
    EXPECT_TRUE(rook1->getColor() == Color::White);
}

TEST(RookTests, testConstructorBlack)
{
    Rook* rook1 = new Rook(Color::Black);
    EXPECT_EQ(rook1->getColor(), Color::Black);
}

TEST(RookTests, testConstructoNone)
{
    Rook* rook1 = new Rook(Color::none);
    ASSERT_TRUE(rook1->getColor() == Color::none);
}

//canMove Tests
TEST(RookTests, testCanMoveUp)
{
    Rook* rook1 = new Rook(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(5, 1)->setPiece(rook1);

    EXPECT_TRUE(rook1->canMoveTo(5, 1, 2, 1, *board) == true);
}

TEST(RookTests, testCanMoveRight)
{
    Rook* rook1 = new Rook(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(4, 3)->setPiece(rook1);

    EXPECT_TRUE(rook1->canMoveTo(4, 3, 4, 6, *board) == true);
}

TEST(RookTests, testCanMoveLeft)
{
    Rook* rook1 = new Rook(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(4, 3)->setPiece(rook1);

    EXPECT_TRUE(rook1->canMoveTo(4, 3, 4, 0, *board) == true);
}

TEST(RookTests, testCanMoveBackwards)
{
    Rook* rook1 = new Rook(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(5, 3)->setPiece(rook1);

    EXPECT_TRUE(rook1->canMoveTo(5, 3, 7, 3, *board) == true);
}

TEST(RookTests, testCanMoveWithPieceInTheWayVertical)
{
    Rook* rookWhite = new Rook(Color::White);
    Rook* rookBlack = new Rook(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 3)->setPiece(rookWhite);
    board->getSquare(4, 3)->setPiece(rookBlack);

    ASSERT_FALSE(rookWhite->canMoveTo(7, 3, 2, 3, *board) == true);
}

TEST(RookTests, testCanMoveWithPieceInTheWayHorizontal)
{
    Rook* rookWhite = new Rook(Color::White);
    Rook* rookBlack = new Rook(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(4, 0)->setPiece(rookWhite);
    board->getSquare(4, 3)->setPiece(rookBlack);

    ASSERT_FALSE(rookWhite->canMoveTo(4, 0, 4, 6, *board) == true);
}

TEST(RookTests, testCanMoveDiagonal)
{
    Rook* rook1 = new Rook(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 0)->setPiece(rook1);

    EXPECT_FALSE(rook1->canMoveTo(7, 0, 6, 1, *board) == true);
}

//getSymbol Tests
TEST(RookTests, testGetSymbolWhite)
{
    Rook* rook1 = new Rook(Color::White);
    ASSERT_TRUE(rook1->getSymbol() == "R");
}

TEST(RookTests, testGetSymboBlack)
{
    Rook* rook1 = new Rook(Color::Black);
    EXPECT_EQ(rook1->getSymbol(), "r");
}

TEST(RookTests, testGetSymbolWrongInput)
{
    Rook* rook1 = new Rook(Color::White);
    ASSERT_FALSE(rook1->getSymbol() == "r");
}
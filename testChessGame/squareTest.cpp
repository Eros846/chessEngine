#include <iostream>

#include "gtest/gtest.h"
#include "../piecesHeader/bishop.hpp"
#include "../piecesHeader/king.hpp"
#include "../chessGameHeader/square.hpp"

//Test Default Constructor
TEST(SquareTests, testDefaultConstructorCol)
{
   Square* square1 = new Square();
   EXPECT_EQ(square1->getCol(), 0);
}


TEST(SquareTests, testDefaultConstructorRow)
{
   Square* square1 = new Square();
   ASSERT_TRUE(square1->getRow() == 0);
}

TEST(SquareTests, testDefaultConstructorPieceType)
{
   Square* square1 = new Square();
   EXPECT_TRUE(square1->getPiece() == nullptr);
}

//Test Paramterized Constructor
TEST(SquareTests, testConstructorCol)
{
   Square* square1 = new Square(3, 4);
   EXPECT_EQ(square1->getCol(), 4);
}

TEST(SquareTests, testConstructorRow)
{
   Square* square1 = new Square(1, 4);
   ASSERT_TRUE(square1->getRow() == 1);
}

TEST(SquareTests, testConstructorPieceType)
{
   Square* square1 = new Square(1, 1);
   EXPECT_TRUE(square1->getPiece() == nullptr);
}

//getRow Tests
TEST(SquareTests, testGetRowZero)
{
   Square* square1 = new Square();
   EXPECT_EQ(square1->getRow(), 0);
}

TEST(SquareTests, testGetRowPosNum)
{
   Square* square1 = new Square(5, 4);
   EXPECT_TRUE(square1->getRow() == 5);
}

TEST(SquareTests, testGetRowZeroNegNum)
{
   Square* square1 = new Square(-5, 3);
   ASSERT_TRUE(square1->getRow() == -5);
}

//getCol Tests
TEST(SquareTests, testGetColZero)
{
   Square* square1 = new Square();
   EXPECT_EQ(square1->getCol(), 0);
}

TEST(SquareTests, testGetColPosNum)
{
   Square* square1 = new Square(5, 4);
   EXPECT_TRUE(square1->getCol() == 4);
}

TEST(SquareTests, testGetColZeroNegNum)
{
   Square* square1 = new Square(-5, -3);
   ASSERT_TRUE(square1->getCol() == -3);
}

//getPiece Tests
TEST(SquareTests, testGetPieceNone)
{
   Square* square1 = new Square();
   EXPECT_EQ(square1->getPiece(), nullptr);
}

TEST(SquareTests, testGetPieceBishop)
{
    Square* square1 = new Square();
    Bishop* bishop1 = new Bishop(Color::White);
    square1->setPiece(bishop1);
    EXPECT_TRUE(square1->getPiece()->getSymbol() == "B");
}

TEST(SquareTests, testGetTwoPieces)
{
    Square* square1 = new Square();
    Square* square2 = new Square();
    Bishop* bishop1 = new Bishop(Color::White);
    King* king1 = new King(Color::Black);
    square1->setPiece(bishop1);
    square2->setPiece(king1);
    EXPECT_TRUE(square1->getPiece()->getSymbol() == "B");
    ASSERT_TRUE(square2->getPiece()->getSymbol() == "k");
}

///setPiece Tests
TEST(SquareTests, testSetPieceColor)
{
    Square* square1 = new Square();
    Bishop* bishop1 = new Bishop(Color::White);
    square1->setPiece(bishop1);


    EXPECT_EQ(square1->getPiece()->getColor(), Color::White);   
}

TEST(SquareTests, testSetPieceBishop)
{
    Square* square1 = new Square();
    Bishop* bishop1 = new Bishop(Color::White);
    square1->setPiece(bishop1);


    ASSERT_TRUE(square1->getPiece()->getSymbol() == "B");   
}

TEST(SquareTests, testSetPieceTwice)
{
    Square* square1 = new Square();
    Square* square2 = new Square();
    Bishop* bishop1 = new Bishop(Color::White);
    King* king1 = new King(Color::Black);
    square1->setPiece(bishop1);
    square2->setPiece(king1);
    EXPECT_TRUE(square1->getPiece()->getSymbol() == "B");
    ASSERT_TRUE(square2->getPiece()->getColor() == Color::Black);  
}

//isEmpty Tests
TEST(SquareTests, testIsEmpty)
{
   Square* square1 = new Square();
   EXPECT_EQ(square1->isEmpty(), true);
}

TEST(SquareTests, testIsNotEmpty)
{
   Square* square1 = new Square();
   Bishop* bishop1 = new Bishop(Color::White);
   square1->setPiece(bishop1);


   EXPECT_FALSE(square1->isEmpty() == true);   
}

TEST(SquareTests, testIsNotEmptyThenIs)
{
   Square* square1 = new Square();
   Bishop* bishop1 = new Bishop(Color::White);
   square1->setPiece(bishop1);


   EXPECT_FALSE(square1->isEmpty() == true);


   square1->clearSquare();


   EXPECT_TRUE(square1->isEmpty() == true);
}

//clearSquare Tests
TEST(SquareTests, testClearSquare)
{
   Square* square1 = new Square();
   square1->clearSquare();
   EXPECT_EQ(square1->isEmpty(), true);
}

TEST(SquareTests, testClearSquareOnPiece)
{
   Square* square1 = new Square();
   Bishop* bishop1 = new Bishop(Color::White);
   square1->setPiece(bishop1);
   square1->clearSquare();


   EXPECT_EQ(square1->isEmpty(), true);
}

TEST(SquareTests, testClearSquareTwice)
{
   Square* square1 = new Square();
   Bishop* bishop1 = new Bishop(Color::White);
   square1->setPiece(bishop1);
   square1->clearSquare();


   EXPECT_FALSE(square1->isEmpty() == false);


   square1->clearSquare();


   EXPECT_TRUE(square1->isEmpty() == true);
}
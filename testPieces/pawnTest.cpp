#include <iostream>
#include "gtest/gtest.h"

#include "../piecesHeader/pawn.hpp"
#include "../chessGameHeader/chessBoard.hpp"

//3 Constructor Tests
TEST(PawnTests, testConstructorWhite)
{
    Pawn* pawn1 = new Pawn(Color::White);
    EXPECT_TRUE(pawn1->getColor() == Color::White);
}

TEST(PawnTests, testConstructorBlack)
{
    Pawn* pawn1 = new Pawn(Color::Black);
    EXPECT_EQ(pawn1->getColor(), Color::Black);
}

TEST(PawnTests, testConstructorNone)
{
    Pawn* pawn1 = new Pawn(Color::none);
    ASSERT_TRUE(pawn1->getColor() == Color::none);
}

//canMove Tests
//White Movement Tests
TEST(PawnTests, testWhiteMove1FromStart)
{
    Pawn* Pawn1 = new Pawn(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(6, 0)->setPiece(Pawn1);
    EXPECT_EQ(Pawn1->canMoveTo(6, 0, 5, 0, *board), true);
}

TEST(PawnTests, testWhiteMove2FromStart)
{
    Pawn* Pawn1 = new Pawn(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(6, 0)->setPiece(Pawn1);
    EXPECT_TRUE(Pawn1->canMoveTo(6, 0, 4, 0, *board) == true);
}

TEST(PawnTests, testWhiteCanMove2FromField)
{
    Pawn* Pawn1 = new Pawn(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(5, 0)->setPiece(Pawn1);
    EXPECT_FALSE(Pawn1->canMoveTo(5, 0, 3, 0, *board) == true);
}

TEST(PawnTests, testWhiteMoveBackwards)
{
    Pawn* Pawn1 = new Pawn(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(4, 3)->setPiece(Pawn1);
    EXPECT_FALSE(Pawn1->canMoveTo(4, 3, 5, 3, *board) == true);
}

//Black Movement Tests
TEST(PawnTests, testBlackMove1FromStart)
{
    Pawn* Pawn1 = new Pawn(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(1, 6)->setPiece(Pawn1);
    EXPECT_EQ(Pawn1->canMoveTo(1, 6, 2, 6, *board), true);
}

TEST(PawnTests, testBlackMove2FromStart)
{
    Pawn* Pawn1 = new Pawn(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(1, 0)->setPiece(Pawn1);
    EXPECT_TRUE(Pawn1->canMoveTo(1, 0, 3, 0, *board) == true);
}

TEST(PawnTests, testBlackCanMove2FromField)
{
    Pawn* Pawn1 = new Pawn(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(2, 0)->setPiece(Pawn1);
    EXPECT_FALSE(Pawn1->canMoveTo(2, 0, 4, 0, *board) == true);
}

TEST(PawnTests, testBlackMoveBackwards)
{
    Pawn* Pawn1 = new Pawn(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(4, 3)->setPiece(Pawn1);
    EXPECT_FALSE(Pawn1->canMoveTo(4, 3, 3, 3, *board) == true);
}

//General Movement Tests
TEST(PawnTests, testMoveHorizontal)
{
    Pawn* Pawn1 = new Pawn(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(4, 3)->setPiece(Pawn1);
    EXPECT_FALSE(Pawn1->canMoveTo(4, 3, 4, 4, *board) == true);
}

TEST(PawnTests, testCanMoveWhileBlocked)
{
    Pawn* Pawn1 = new Pawn(Color::White);
    Pawn* Pawn2 = new Pawn(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(5, 3)->setPiece(Pawn1);
    board->getSquare(4, 3)->setPiece(Pawn2);
    EXPECT_FALSE(Pawn1->canMoveTo(5, 3, 4, 3, *board) == true);
}

//getSymbol Tests
TEST(PawnTests, testGetSymbolWhite)
{
    Pawn* pawn1 = new Pawn(Color::White);
    ASSERT_TRUE(pawn1->getSymbol() == "P");
}

TEST(PawnTests, testGetSymbolBlack)
{
    Pawn* pawn1 = new Pawn(Color::Black);
    EXPECT_EQ(pawn1->getSymbol(), "p");
}

TEST(PawnTests, testGetSymbolWrongInput)
{
    Pawn* pawn1 = new Pawn(Color::White);
    ASSERT_FALSE(pawn1->getSymbol() == "p");
}
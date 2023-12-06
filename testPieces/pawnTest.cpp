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

//canMove Tests NEED TO BE IMPLEMENTED
// TEST(BishopTests, testCanMove)
// {
//     Bishop* bishop1 = new Bishop(Color::White);
//     chessBoard* board = new chessBoard();
//     board[7][2].setPiece(bishop1);
//     EXPECT_EQ(bishop1->canMoveTo(7, 2, 6, 3, &board), true);
// }

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
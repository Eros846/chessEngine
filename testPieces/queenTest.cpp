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

//canMove Tests NEED TO BE IMPLEMENTED
// TEST(BishopTests, testCanMove)
// {
//     Bishop* bishop1 = new Bishop(Color::White);
//     chessBoard* board = new chessBoard();
//     board[7][2]->setPiece(bishop1);
//     EXPECT_EQ(bishop1->canMoveTo(7, 2, 6, 3, &board), true);
// }

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
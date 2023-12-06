#include <iostream>
#include "gtest/gtest.h"

#include "../piecesHeader/bishop.hpp"
#include "../chessGameHeader/chessBoard.hpp"

//3 Constructor Tests
TEST(BishopTests, testConstructorWhite)
{
    Bishop* bishop1 = new Bishop(Color::White);
    EXPECT_TRUE(bishop1->getColor() == Color::White);
}

TEST(BishopTests, testConstructorBlack)
{
    Bishop* bishop1 = new Bishop(Color::Black);
    EXPECT_EQ(bishop1->getColor(), Color::Black);
}

TEST(BishopTests, testConstructorNone)
{
    Bishop* bishop1 = new Bishop(Color::none);
    ASSERT_TRUE(bishop1->getColor() == Color::none);
}

//canMove Tests
TEST(BishopTests, testCanMoveForwardRight)
{
    Bishop* bishop1 = new Bishop(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 2).setPiece(bishop1);

    EXPECT_EQ(bishop1->canMoveTo(7, 2, 6, 3, *board), true);
}

TEST(BishopTests, testCanMoveForwardRightBlack)
{
    Bishop* bishop1 = new Bishop(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(0, 2).setPiece(bishop1);

    EXPECT_EQ(bishop1->canMoveTo(0, 2, 3, 5, *board), true);
}

TEST(BishopTests, testCanMoveForwardLeft)
{
    Bishop* bishop1 = new Bishop(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 2).setPiece(bishop1);

    ASSERT_TRUE(bishop1->canMoveTo(7, 2, 6, 1, *board) == true);
}

TEST(BishopTests, testCanMoveForwardRightMultipleSpaces)
{
    Bishop* bishop1 = new Bishop(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 2).setPiece(bishop1);

    EXPECT_TRUE(bishop1->canMoveTo(7, 2, 3, 6, *board) == true);
}

TEST(BishopTests, testCanMoveForwardLefttMultipleSpaces)
{
    Bishop* bishop1 = new Bishop(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 5).setPiece(bishop1);

    EXPECT_EQ(bishop1->canMoveTo(7, 5, 4, 2, *board), true);
}

TEST(BishopTests, testCanMoveWithPieceInTheWay)
{
    Bishop* bishopWhite = new Bishop(Color::White);
    Bishop* bishopBlack = new Bishop(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 2).setPiece(bishopWhite);
    board->getSquare(5, 4).setPiece(bishopBlack);

    ASSERT_FALSE(bishopWhite->canMoveTo(7, 2, 4, 5, *board) == true);
}

TEST(BishopTests, testCanMoveVertical)
{
    Bishop* bishop1 = new Bishop(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(0, 2).setPiece(bishop1);

    EXPECT_FALSE(bishop1->canMoveTo(0, 2, 1, 2, *board) == true);
}

TEST(BishopTests, testCanMoveHortizontal)
{
    Bishop* bishop1 = new Bishop(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(0, 2).setPiece(bishop1);

    EXPECT_EQ(bishop1->canMoveTo(0, 2, 0, 4, *board), false);
}

//getSymbol Tests
TEST(BishopTests, testGetSymbolWhite)
{
    Bishop* bishop1 = new Bishop(Color::White);
    ASSERT_TRUE(bishop1->getSymbol() == "B");
}

TEST(BishopTests, testGetSymbolBlack)
{
    Bishop* bishop1 = new Bishop(Color::Black);
    EXPECT_EQ(bishop1->getSymbol(), "b");
}

TEST(BishopTests, testGetSymbolWrongInput)
{
    Bishop* bishop1 = new Bishop(Color::White);
    ASSERT_FALSE(bishop1->getSymbol() == "b");
}
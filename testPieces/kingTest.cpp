#include <iostream>
#include "gtest/gtest.h"

#include "../piecesHeader/king.hpp"
#include "../piecesHeader/bishop.hpp"
#include "../chessGameHeader/chessBoard.hpp"

//3 Constructor Tests
TEST(KingTests, testConstructorWhite)
{
    King* king1 = new King(Color::White);
    EXPECT_TRUE(king1->getColor() == Color::White);
}

TEST(KingTests, testConstructorBlack)
{
    King* king1 = new King(Color::Black);
    EXPECT_EQ(king1->getColor(), Color::Black);
}

TEST(KingTests, testConstructorNone)
{
    King* king1 = new King(Color::none);
    ASSERT_TRUE(king1->getColor() == Color::none);
}

//canMove Tests
TEST(KingTests, testCanMoveForward)
{
    King* king1 = new King(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 4)->setPiece(king1);

    EXPECT_EQ(king1->canMoveTo(7, 4, 6, 4, *board), true);
}

TEST(KingTests, testCanMoveRight)
{
    King* king1 = new King(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 4)->setPiece(king1);

    ASSERT_TRUE(king1->canMoveTo(7, 4, 7, 5, *board) == true);
}

TEST(KingTests, testCanMoveLeft)
{
    King* king1 = new King(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 4)->setPiece(king1);

    EXPECT_EQ(king1->canMoveTo(7, 4, 7, 3, *board), true);
}

TEST(KingTests, testCanMoveBackward)
{
    King* king1 = new King(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(6, 4)->setPiece(king1);

    ASSERT_TRUE(king1->canMoveTo(6, 4, 7, 4, *board) == true);
}

TEST(KingTests, testCannotMoveBackwardMultipleSpaces)
{
    King* king1 = new King(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(5, 4)->setPiece(king1);

    ASSERT_FALSE(king1->canMoveTo(5, 4, 7, 4, *board) == true);
}

TEST(KingTests, testCanMoveWithPieceInTheWay)
{
    King* kingWhite = new King(Color::White);
    Bishop* bishopWhite = new Bishop(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 4)->setPiece(kingWhite);
    board->getSquare(7, 5)->setPiece(bishopWhite);

    EXPECT_EQ(kingWhite->canMoveTo(7, 4, 7, 5, *board), false);
}

//getSymbol Tests
TEST(KingTests, testGetSymbolWhite)
{
    King* king1 = new King(Color::White);
    ASSERT_TRUE(king1->getSymbol() == "K");
}

TEST(KingTests, testGetSymbolBlack)
{
    King* king1 = new King(Color::Black);
    EXPECT_EQ(king1->getSymbol(), "k");
}

TEST(KingTests, testGetSymbolWrongInput)
{
    King* king1 = new King(Color::White);
    ASSERT_FALSE(king1->getSymbol() == "k");
}
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
    unique_ptr<Piece> rook1 = make_unique<Rook>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(5, 1).setPiece(move(rook1));

    EXPECT_TRUE(board->getSquare(5, 1).getPiece().canMoveTo(5, 1, 2, 1, *board) == true);
}

TEST(RookTests, testCanMoveRight)
{
    unique_ptr<Piece> rook1 = make_unique<Rook>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(4, 3).setPiece(move(rook1));

    EXPECT_TRUE(board->getSquare(4, 3).getPiece().canMoveTo(4, 3, 4, 6, *board) == true);
}

TEST(RookTests, testCanMoveLeft)
{
    unique_ptr<Piece> rook1 = make_unique<Rook>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(4, 3).setPiece(move(rook1));

    EXPECT_TRUE(board->getSquare(4, 3).getPiece().canMoveTo(4, 3, 4, 0, *board) == true);
}

TEST(RookTests, testCanMoveBackwards)
{
    unique_ptr<Piece> rook1 = make_unique<Rook>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(5, 3).setPiece(move(rook1));

    EXPECT_TRUE(board->getSquare(5, 3).getPiece().canMoveTo(5, 3, 7, 3, *board) == true);
}

TEST(RookTests, testCanMoveWithPieceInTheWayVertical)
{
    unique_ptr<Piece> rookWhite = make_unique<Rook>(Color::White);
    unique_ptr<Piece> rookBlack = make_unique<Rook>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 3).setPiece(move(rookWhite));
    board->getSquare(4, 3).setPiece(move(rookBlack));

    EXPECT_EQ(board->getSquare(7, 3).getPiece().canMoveTo(7, 3, 2, 3, *board), false);
}

TEST(RookTests, testCanMoveWithPieceInTheWayHorizontal)
{
    unique_ptr<Piece> rookWhite = make_unique<Rook>(Color::White);
    unique_ptr<Piece> rookBlack = make_unique<Rook>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(4, 0).setPiece(move(rookWhite));
    board->getSquare(4, 3).setPiece(move(rookBlack));

    ASSERT_FALSE(board->getSquare(4, 0).getPiece().canMoveTo(4, 0, 4, 6, *board) == true);
}

TEST(RookTests, testCanMoveDiagonal)
{
    unique_ptr<Piece> rook1 = make_unique<Rook>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 0).setPiece(move(rook1));

    EXPECT_EQ(board->getSquare(7, 0).getPiece().canMoveTo(7, 0, 6, 1, *board), false);
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
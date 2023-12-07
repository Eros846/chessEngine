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
// TEST(BishopTests, testCanMoveForwardRight)
// {
//     unique_ptr<Piece> bishop1 = make_unique<Bishop>(Color::White);
//     chessBoard* board = new chessBoard();
//     board->getSquare(7,2).setPiece(move(bishop1));

//     EXPECT_EQ(board->getSquare(7, 2).getPiece().canMoveTo(7, 2, 6, 3, *board), true);
// }

// TEST(BishopTests, testCanMoveForwardRightBlack)
// {
//     unique_ptr<Piece> bishop1 = make_unique<Bishop>(Color::Black);
//     chessBoard* board = new chessBoard();
//     board->getSquare(0, 2).setPiece(move(bishop1));

//     EXPECT_EQ(board->getSquare(0,2).getPiece().canMoveTo(0, 2, 3, 5, *board), true);
// }

// TEST(BishopTests, testCanMoveForwardLeft)
// {
//     unique_ptr<Piece> bishop1 = make_unique<Bishop>(Color::White);
//     chessBoard* board = new chessBoard();
//     board->getSquare(7, 2).setPiece(move(bishop1));

//     ASSERT_TRUE(board->getSquare(7,2).getPiece().canMoveTo(7, 2, 6, 1, *board) == true);
// }

// TEST(BishopTests, testCanMoveForwardRightMultipleSpaces)
// {
//     unique_ptr<Piece> bishop1 = make_unique<Bishop>(Color::White);
//     chessBoard* board = new chessBoard();
//     board->getSquare(7, 2).setPiece(move(bishop1));

//     EXPECT_TRUE(board->getSquare(7, 2).getPiece().canMoveTo(7, 2, 3, 6, *board) == true);
// }

// TEST(BishopTests, testCanMoveForwardLefttMultipleSpaces)
// {
//     unique_ptr<Piece> bishop1 = make_unique<Bishop>(Color::White);
//     chessBoard* board = new chessBoard();
//     board->getSquare(7, 5).setPiece(move(bishop1));

//     EXPECT_EQ(board->getSquare(7, 5).getPiece().canMoveTo(7, 5, 4, 2, *board), true);
// }

TEST(BishopTests, testCanMoveWithPieceInTheWay)
{
    unique_ptr<Piece> bishopWhite = make_unique<Bishop>(Color::White);
   unique_ptr<Piece> bishopBlack = make_unique<Bishop>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(7, 2).setPiece(move(bishopWhite));
    board->getSquare(5, 4).setPiece(move(bishopBlack));

    ASSERT_FALSE(board->getSquare(7, 2).getPiece().canMoveTo(7, 2, 4, 5, *board) == true);
}

TEST(BishopTests, testCanMoveVertical)
{
    unique_ptr<Piece> bishop1 = make_unique<Bishop>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(0, 2).setPiece(move(bishop1));

    EXPECT_FALSE(board->getSquare(0, 2).getPiece().canMoveTo(0, 2, 1, 2, *board) == true);
}

TEST(BishopTests, testCanMoveHortizontal)
{
    unique_ptr<Piece> bishop1 = make_unique<Bishop>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(0, 2).setPiece(move(bishop1));

    EXPECT_EQ(board->getSquare(0, 2).getPiece().canMoveTo(0, 2, 0, 4, *board), false);
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
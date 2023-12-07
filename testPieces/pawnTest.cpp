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
    unique_ptr<Piece> pawn1 = make_unique<Pawn>(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(6, 0).setPiece(move(pawn1));

    EXPECT_EQ(board->getSquare(6, 0).getPiece().canMoveTo(6, 0, 5, 0, *board), true);
}

TEST(PawnTests, testWhiteMove2FromStart)
{
    unique_ptr<Piece> pawn1 = make_unique<Pawn>(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(6, 0).setPiece(move(pawn1));

    EXPECT_TRUE(board->getSquare(6, 0).getPiece().canMoveTo(6, 0, 4, 0, *board) == true);
}

TEST(PawnTests, testWhiteCanMove2FromField)
{
    unique_ptr<Piece> pawn1 = make_unique<Pawn>(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(5, 0).setPiece(move(pawn1));

    EXPECT_FALSE(board->getSquare(5, 0).getPiece().canMoveTo(5, 0, 3, 0, *board) == true);
}

TEST(PawnTests, testWhiteMoveBackwards)
{
    unique_ptr<Piece> pawn1 = make_unique<Pawn>(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(4, 3).setPiece(move(pawn1));

    EXPECT_EQ(board->getSquare(4, 3).getPiece().canMoveTo(4, 3, 5, 3, *board), false);
}

//Black Movement Tests
TEST(PawnTests, testBlackMove1FromStart)
{
    unique_ptr<Piece> pawn1 = make_unique<Pawn>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(1, 6).setPiece(move(pawn1));

    EXPECT_EQ(board->getSquare(1, 6).getPiece().canMoveTo(1, 6, 2, 6, *board), true);
}

TEST(PawnTests, testBlackMove2FromStart)
{
    unique_ptr<Piece> pawn1 = make_unique<Pawn>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(1, 0).setPiece(move(pawn1));

    EXPECT_TRUE(board->getSquare(1, 0).getPiece().canMoveTo(1, 0, 3, 0, *board) == true);
}

TEST(PawnTests, testBlackCanMove2FromField)
{
    unique_ptr<Piece> pawn1 = make_unique<Pawn>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(2, 0).setPiece(move(pawn1));

    EXPECT_FALSE(board->getSquare(2, 0).getPiece().canMoveTo(2, 0, 4, 0, *board) == true);
}

TEST(PawnTests, testBlackMoveBackwards)
{
    unique_ptr<Piece> pawn1 = make_unique<Pawn>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(4, 3).setPiece(move(pawn1));
    EXPECT_FALSE(board->getSquare(4, 3).getPiece().canMoveTo(4, 3, 3, 3, *board) == true);
}

//General Movement Tests
TEST(PawnTests, testMoveHorizontal)
{
    unique_ptr<Piece> pawn1 = make_unique<Pawn>(Color::White);
    chessBoard* board = new chessBoard();
    board->getSquare(4, 3).setPiece(move(pawn1));

    EXPECT_EQ(board->getSquare(4, 3).getPiece().canMoveTo(4, 3, 4, 4, *board), false);
}

TEST(PawnTests, testCanMoveWhileBlocked)
{
    unique_ptr<Piece> pawn1 = make_unique<Pawn>(Color::White);
    unique_ptr<Piece> pawn2 = make_unique<Pawn>(Color::Black);
    chessBoard* board = new chessBoard();
    board->getSquare(5, 3).setPiece(move(pawn1));
    board->getSquare(4, 3).setPiece(move(pawn2));

    EXPECT_FALSE(board->getSquare(5, 3).getPiece().canMoveTo(5, 3, 4, 3, *board) == true);
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
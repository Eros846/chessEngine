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

//canMove Tests NEED TO BE IMPLEMENTED


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
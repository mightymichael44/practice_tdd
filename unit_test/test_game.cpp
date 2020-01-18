#include "gtest/gtest.h"
#include "game.h"

void rollMany(Game& game, const int& times, const int& pins){
    for(int i(0); i<times; i++){
        game.roll(pins);
    }
}

void rollSpare(Game& game){
    game.roll(8);
    game.roll(2);
}

void rollStrike(Game& game){
    game.roll(10);
}
GTEST_TEST(BowlingTestSuite, GameOfZeros)
{
    Game game;
    rollMany(game, 20, 0);
    ASSERT_EQ(0, game.getScore());
}

GTEST_TEST(BowlingTestSuite, GameOfOnes)
{
    Game game;
    rollMany(game, 20, 1);
    ASSERT_EQ(20, game.getScore());
}

GTEST_TEST(BowlingTestSuite, Spare){
    Game game;
    rollSpare(game);
    game.roll(4);

    ASSERT_EQ(18, game.getScore());
}

GTEST_TEST(BowlingTestSuite, Strike){
    Game game;
    rollStrike(game);
    game.roll(5);
    game.roll(4);

    ASSERT_EQ(28, game.getScore());
}

GTEST_TEST(BowlingTestSuite, GameOfStrikes){
    Game game;
    for (int i(0); i<12; i++){
        rollStrike(game);
    }

    ASSERT_EQ(300, game.getScore());
}


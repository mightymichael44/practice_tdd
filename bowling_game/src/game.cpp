#include "game.h"

Game::Game() : throwIdx(0)
{
    for (int &el : this->throws)
    {
        el = 0;
    }
};

void Game::roll(const int &pins)
{
    this->throws[throwIdx++] = pins;
}

int Game::getScore()
{
    int score(0);
    int actualThrowIdx(0);
    for (int frameIdx(0); frameIdx < 10; frameIdx++)
    {
        if (isSpare(actualThrowIdx))
        {
            score += 10 + this->throws[actualThrowIdx + 2];
            actualThrowIdx += 2;
        }
        else
        {
            if (isStrike(actualThrowIdx))
            {
                score += 10 + this->throws[actualThrowIdx + 1] + this->throws[actualThrowIdx + 2];
                actualThrowIdx++;
            }
            else
            {
                score += this->throws[actualThrowIdx] + this->throws[actualThrowIdx + 1];
                actualThrowIdx += 2;
            }
        }
    }
    return score;
}

bool Game::isSpare(const int &throwIdx)
{
    return (this->throws[throwIdx] + this->throws[throwIdx + 1] == 10) ? true : false;
}

bool Game::isStrike(const int &throwIdx)
{
    return (this->throws[throwIdx] == 10) ? true : false;
}
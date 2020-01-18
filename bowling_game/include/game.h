#include <array>

class Game
{
public:
 Game();
 void roll(const int& pins);
 int getScore();
private:
 std::array<int, 21> throws;
 int throwIdx;
 bool isSpare(const int& frameIdx);
 bool isStrike(const int& frameIdx);
};

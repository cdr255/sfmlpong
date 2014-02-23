#include "sfmlpong.hpp"

int main()
{
  Paddle Player1(20, 100, 0, 20, 200, 400);
  Paddle Player2(760, 100, 0, 20, 200, 400);

  Player1.print();
  Player2.print();

  return EXIT_SUCCESS;
}

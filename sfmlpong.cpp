#include "sfmlpong.hpp"

int main()
{
  Paddle player1(20, 100, 0, 20, 200, 400);
  Paddle player2(760, 100, 0, 20, 200, 400);
  Ball ball(0.25);

  player1.print();
  player2.print();
  ball.print();
  ball.serve();
  ball.print();

  return EXIT_SUCCESS;
}

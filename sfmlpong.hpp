#ifndef SFMLPONG_H
#define SFMLPONG_H
#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
// Global Constant Definition
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define WINDOW_DEPTH 32
#define PADDLE_WIDTH 20
#define PADDLE_HEIGHT 200
#define PADDLE_SPEED 400
#define BALL_SIDE 40

class Paddle
{
  int x;
  int y;
  int score;
  int width;
  int height;
  int speed;
public:
  void move(int, int);
};

void Paddle::move(int dx, int dy)
{
  x = x + dx;
  y = y + dy;
}








#endif

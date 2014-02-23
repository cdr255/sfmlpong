#ifndef SFMLPONG_H
#define SFMLPONG_H
#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
// Global Constant Definition
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define SCREEN_DEPTH 32
#define PADDLE_WIDTH 20
#define PADDLE_HEIGHT 200
#define PADDLE_SPEED 400
#define BALL_SIDE 40

class Paddle
{
  float x;
  float y;
  int score;
  int width;
  int height;
  int speed;
public:
  sf::Shape display;
  Paddle(float, float, int, int, int, int);
  void print() const;
  void move(float, float);

};

Paddle::Paddle(float setx, float sety, int setscore, int setwidth, int setheight, int setspeed)
{
  x = setx;
  y = sety;
  score = setscore;
  width = setwidth;
  height = setheight;
  speed = setspeed;
  display = sf::Shape::Rectangle(x, y, (x + width), (y + height), sf::Color(255, 255, 255, 200));
}

void Paddle::print() const
{ // Const keeps it from modifying variables in the class. It will only read them.
  std::cout << x << " " << y << " " << score << " " << width << " " << height << " "  << speed << "\n";
}
 
void Paddle::move(float dx, float dy)
{
  x = x + dx;
  y = y + dy;
}

class Ball
{
  float x;
  float y;
  float xvel;
  float yvel;
  int width;
  int height;
  float difficulty;
  int max;
public:
  Ball(float);
  void serve();
  void move();
  void print() const;
};

Ball::Ball(float diff)
{
  x = (SCREEN_WIDTH - BALL_SIDE) / 2;
  y = (SCREEN_HEIGHT - BALL_SIDE) / 2;
  xvel = 0;
  yvel = 0;
  width = BALL_SIDE;
  height = BALL_SIDE;
  difficulty = diff;
  max = 6;
}

void Ball::serve()
{
  int random = sf::Randomizer::Random(0, 7);
  switch (random)
    {
    case 0:
      xvel = 1;
      yvel = 1;
      break;
    case 1:
      xvel = 1;
      yvel = 0.5;
      break;
    case 2:
      xvel = 1;
      yvel = -0.5;
      break;
    case 3:
      xvel = 1;
      yvel = -1;
      break;
    case 4:
      xvel = -1;
      yvel = 1;
      break;
    case 5:
      xvel = -1;
      yvel = 0.5;
      break;
    case 6:
      xvel = -1;
      yvel = -0.5;
      break;
    case 7:
      xvel = -1;
      yvel = -1;
      break;
    default:
      xvel = 1;
      yvel = 1;
    }
}

void Ball::move()
{
  std::cout << "Not Implemented Yet.\n";
}
      
void Ball::print() const
{
  std::cout << x << " " << y << " " << xvel << " " << yvel << " " << width << " " << height << " " << difficulty << " " << max << "\n";
}




#endif

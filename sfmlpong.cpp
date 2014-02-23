#include "sfmlpong.hpp"

int main()
{

  // Create Objects Used by Game
  Paddle player1(20, 100, 0, 20, 200, 400);
  Paddle player2(760, 100, 0, 20, 200, 400);
  Ball ball(0.25);
  sf::Clock clock;
  float dt = 0;

  // Create Graphical Objects
  sf::RenderWindow App(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_DEPTH), "sfmlpong");

  player1.print();
  player2.print();
  ball.print();
  ball.serve();

  // Game Loop
  while(App.IsOpened())
    {
      // EVENT HANDLING

      sf::Event Event;
      while(App.GetEvent(Event))
	{
	  // Closing Window = Exit
	  if(Event.Type == sf::Event::Closed)
	    App.Close();
	}
      
      // GAME HANDLING
      // Clock First
      dt = clock.GetElapsedTime();
      clock.Reset();
      ball.move(dt);
      ball.print();


      // DISPLAY HANDLING

      // Clear the Screen (Black Color)
      App.Clear();

      App.Draw(ball.display);
      App.Draw(player1.display);
      App.Draw(player2.display);
      
      // Display the Screen and Loop
      App.Display();
    }


  return EXIT_SUCCESS;
}

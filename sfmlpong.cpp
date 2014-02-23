#include "sfmlpong.hpp"

int main()
{

  // Create Objects Used by Game
  Paddle player1(20, 100, 0, 20, 200, 400);
  Paddle player2(760, 100, 0, 20, 200, 400);
  Ball ball(0.25);

  // Create Graphical Objects
  sf::RenderWindow App(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_DEPTH), "sfmlpong");


  player1.print();
  player2.print();
  ball.print();
  ball.serve();
  ball.print();

  // Game Loop
  while(App.IsOpened())
    {
      sf::Event Event;
      while(App.GetEvent(Event))
	{
	  // Closing Window = Exit
	  if(Event.Type == sf::Event::Closed)
	    App.Close();
	}
      
      // Clear the Screen (Black Color)
      App.Clear();

      App.Draw(player1.display);
      App.Draw(player2.display);
      
      // Display the Screen and Loop
      App.Display();
    }


  return EXIT_SUCCESS;
}

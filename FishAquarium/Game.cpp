#include "Game.h"

// Constructor.
Game::Game() {

	// Creating game window.
	window.create(VideoMode(WIDTH, HEIGHT, 32), "FishAquarium");

	// Creating background.
	Texture backgroundTexture;
	// TO-DO: Obs³uga b³êdnego wczytywania plków.
	backgroundTexture.loadFromFile("resources/textures/background.png");
	background.setTexture(backgroundTexture);
	
	// Starting the game.
	play();
	
}


void Game::play() {

	bool play = true;
	
	// Game loop.
	while (window.isOpen() && play)
	{
		// Window has a container which store occured events.
		Event winEvent;
		while (window.pollEvent(winEvent)) {

			// User want to close the window.
			if (winEvent.type == Event::Closed) {
				window.close();
			}

			// Obs³uga klawiszy i poruszania siê rybki
			if (winEvent.type == Event::KeyPressed)
			{

				// ESCAPE
				if(winEvent.key.code == Keyboard::Escape)
					window.close(); // TO-DO: Display Menu

				float posX = fish.getPosition().x;
				float posY = fish.getPosition().y;

				// Left arrow
				if (winEvent.key.code == Keyboard::Left && posX != 0)
				{ 
					// TO-DO: Zmiana kierunku rybki
					fish.swim(--posX, posY);
				}
				// Right arrow
				if (winEvent.key.code == Keyboard::Right && posX != WIDTH)
				{
					// TO-DO: Zmiana kierunku rybki
					fish.swim(++posX, posY);
				}
				// Up arrow
				if (winEvent.key.code == Keyboard::Up && posY != 0)
				{
					fish.swim(posX, --posY);
				}
				// Down arrow
				if (winEvent.key.code == Keyboard::Down && posY != HEIGHT)
				{
					fish.swim(posX, ++posY);
				}

			}

		}

		// Drawing everything in window.
		window.clear(Color(30, 50, 100));
		window.draw(background);
		fish.draw(window);
		window.display();

	}

}
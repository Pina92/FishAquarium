//Deklaracje (implementacje) klasy Game
#include "Game.h"
#include <SFML/Graphics.hpp>

using namespace sf;

// Konstruktor.
Game::Game() {

	// Creating window.


	// Textures.
	Texture backgroundTexture, fishTexture;

	// TO-DO: Obs³uga b³êdnego wczytywania plków.

	// Creating background.
	backgroundTexture.loadFromFile("resources/textures/background.png");
	background.setTexture(backgroundTexture);

	// Creating fish.
	fishTexture.loadFromFile("resources/textures/fish1.png");
	fish.setTexture(fishTexture);
	fish.setScale(0.25, 0.25);
	fish.setPosition(100, 100);

}


// G³ówna funkcja odpowiedzialna za rozgrywkê.
void Game::play() {


	bool play = true;
	
	// Game loop.
	while (play)
	{

		// Obs³uga klawiszy i poruszania siê rybki


		// Drawing everything in window.
		//window.clear(Color(30, 50, 100));
		window.draw(background);
		window.draw(fish);
		window.display();

	}

}
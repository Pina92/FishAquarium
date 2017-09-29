#pragma once
#include <SFML/Graphics.hpp>
#include "Fish.h"

using namespace sf;

class Game {

private:

	RenderWindow window;
	Sprite background;
	Fish fish;

	void play();

public:
	
	static const unsigned short WIDTH = 800;
	static const unsigned short HEIGHT = 600;
	
	// Constructor.
	Game();

};
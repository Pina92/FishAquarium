#include "Game.h"
#include "Fish.h"

Fish::Fish() {

	// Creating fish.
	fHeight = 50;
	fWidth = 100;
	fishSprite.setSize(Vector2f(fWidth, fHeight));

	fishTexture.loadFromFile("resources/textures/fish1.png");
	// TO-DO: Sprawdzenie czy plik zaladowal sie poprawnie.
	fishSprite.setTexture(&fishTexture);
	fishSprite.setPosition(Game::WIDTH/2 - fWidth/2, Game::HEIGHT/2 - fHeight/2);

	lvl = 0;

}

void Fish::swim(float x, float y) {
	
	fishSprite.setPosition(x, y);

}

bool Fish::eatFish() {

	// LVL++
	return false;

}

void Fish::draw(RenderWindow &window) {

	window.draw(fishSprite);

}

Vector2f Fish::getPosition() {

	return fishSprite.getPosition();

}

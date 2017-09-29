#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Fish {

private:

	RectangleShape fishSprite;
	Texture fishTexture;
	unsigned short lvl;

	bool eatFish();

public:

	float fHeight, fWidth;

	Fish();
	void swim(float, float);
	Vector2f getPosition();
	void draw(RenderWindow &);

};

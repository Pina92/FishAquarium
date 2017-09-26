#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{

	//Textures
	Texture backgroundTexture, fishTexture;
	//obs³uga b³êdnego wczytywania
	backgroundTexture.loadFromFile("resources/textures/background.png");
	fishTexture.loadFromFile("resources/textures/fish1.png");

	
	
	//Sprites
	Sprite background, fish;
	
	background.setTexture(backgroundTexture);
	
	fish.setTexture(fishTexture);
	fish.setScale(0.25, 0.25);
	fish.setPosition(100, 100);

	
	
	// Creating game window.
	RenderWindow window(VideoMode(800, 600, 32), "FishAquarium");

	while (window.isOpen()) {

		// Window has a container which store occured events.
		Event winEvent;
		while (window.pollEvent(winEvent)) {

			// User want to close the window.
			if (winEvent.type == Event::Closed) {
				window.close();
			}

		}

		// Drawing everything in window.
		//window.clear(Color(30, 50, 100));
		window.draw(background);
		window.draw(fish);
		window.display();

	}

	return 0;
}
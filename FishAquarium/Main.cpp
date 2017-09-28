#include <SFML/Graphics.hpp>
#include "Fish.h"

using namespace sf;

int main()
{
	
	
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

	}

	return 0;
}
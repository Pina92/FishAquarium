#include <SFML/Graphics.hpp>

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

		window.clear(Color(30, 50, 100));
		window.display();
	}

	return 0;
}
//Beginning C++ Game Programming 2nd Edition Packt.com by John Horton

#include <SFML/Graphics.hpp>

using namespace sf;

int main()

{
	//Chapter 1-C++, SFML, Visual Studio,and Starting the First Game

	VideoMode vm(1920, 1080);

	RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

	Texture textureBackground;
	textureBackground.loadFromFile("graphics/background.png");

	Sprite spriteBackground;
	spriteBackground.setTexture(textureBackground);
	spriteBackground.setPosition(0, 0);

	while (window.isOpen())
	{
		// Handle Player Input
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}

		//Update the scene

		//Draw the scene

		//Clear everything from the last frame
		window.clear();

		//Draw game scene here
		window.draw(spriteBackground);

		//Show everything we just drew
		window.display();
	}

	return 0;
}
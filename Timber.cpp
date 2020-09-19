#include <SFML/Graphics.hpp>

using namespace sf;

int main()

{
	VideoMode vm(1920, 1080);

	RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

	Texture textureBackground;
	textureBackground.loadFromFile("graphics/background.png");

	Sprite spriteBackground;
	spriteBackground.setTexture(textureBackground);
	spriteBackground.setPosition(0, 0);

	//Make a tree sprite
	Texture textureTree;
	textureTree.loadFromFile("graphics/tree.png");
	Sprite spriteTree;
	spriteBackground.setTexture(textureTree);
	spriteTree.setPosition(810, 0);

	//Prepare the bee
	Texture textureBee;
	textureBee.loadFromFile("graphics/bee.png");
	Sprite spriteBee;
	spriteBee.setTexture(textureBee);
	spriteBee.setPosition(0, 800);

	//Is bee moving?
	bool beeActive = false;

	//How fast can the bee fly
	float beeSpeed = 0.0f;

	//make 3 cloud sprites from 1 texture
	Texture textureCloud;
	textureCloud.loadFromFile("graphics/cloud.png");

	//3 new sprites from same texture
	Sprite spriteCloud1;
	Sprite spriteCloud2;
	Sprite spriteCloud3;
	spriteCloud1.setTexture(textureCloud);
	spriteCloud2.setTexture(textureCloud);
	spriteCloud3.setTexture(textureCloud);

	//Position clouds on left of screen at different heights
	spriteCloud1.setPosition(0, 0);
	spriteCloud2.setPosition(0, 150);
	spriteCloud3.setPosition(0, 300);

	//Are the clouds on rthe screen
	bool cloud1Active = false;
	bool cloud2Active = false;
	bool cloud3Active = false;

	// How fast is each cloud
	float cloud1Speed = 0.0f;
	float cloud2Speed = 0.0f;
	float cloud3Speed = 0.0f;

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

		//Draw the clouds
		window.draw(spriteCloud1);
		window.draw(spriteCloud2);
		window.draw(spriteCloud3);

		//Draw the insect
		window.draw(spriteBee);

		//Show everything we just drew
		window.display();
	}

	return 0;
}
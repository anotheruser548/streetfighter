#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "character.h"
#include <Windows.h>

using namespace std;

int main()
{




	sf::RenderWindow win(sf::VideoMode(1200, 700), "My window");

	sf::Texture bg_texture;
	bg_texture.loadFromFile("SuzakuCastle.jpg");
	sf::Sprite bg;
	bg.setScale({ 1.5,2 });
	bg.setTexture(bg_texture);

	character c1("Ryu.png", 33, 8, 637, 3494);
	
	c1.cur_piece.top = 2638;
	c1.cur_piece.left = 0;
	c1.cur_piece.width = 637;
	c1.cur_piece.height = c1.dy_onepiece;
	c1.sprite->setTextureRect(c1.cur_piece);
	c1.set_position({ 0,200 });
	c1.setscale({ 2,2 });

	while (win.isOpen())
	{
		sf::Event event;
		while (win.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				win.close();
		}
		win.clear();
		win.draw(bg);
		win.draw(*c1.get_sprite());
		win.display();
	}
}
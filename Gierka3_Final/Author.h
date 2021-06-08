#pragma once
#include <SFML/Graphics.hpp>

#define MAX_NUMBER_OF_LINES 8

class Author
{
public:
	Author(float width, float height);
	~Author();

	void draw(sf::RenderWindow& window);
private:
	sf::Font font;
	sf::Text text[MAX_NUMBER_OF_LINES];


};


#include "Author.h"

Author::Author(float width, float height)
{
	if (!font.loadFromFile("Fonts/PixellettersFull.ttf"))
	{

	}

	text[0].setFont(font);
	text[0].setFillColor(sf::Color::Red);
	text[0].setString("Autor");
	text[0].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_LINES + 1) * 1));
	text[0].setCharacterSize(40);

	text[1].setFont(font);
	text[1].setFillColor(sf::Color::Red);
	text[1].setString("Jakub Ziomek");
	text[1].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_LINES + 1) * 1));
	text[1].setCharacterSize(40);

	text[2].setFont(font);
	text[2].setFillColor(sf::Color::Red);
	text[2].setString("Sterowanie");
	text[2].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_LINES + 1) * 1));
	text[2].setCharacterSize(40);

	text[3].setFont(font);
	text[3].setFillColor(sf::Color::Red);
	text[3].setString("W - ruch w gore");
	text[3].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_LINES + 1) * 1));
	text[3].setCharacterSize(40);

	text[4].setFont(font);
	text[4].setFillColor(sf::Color::Red);
	text[4].setString("S - ruch w dol");
	text[4].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_LINES + 1) * 1));
	text[4].setCharacterSize(40);

	text[5].setFont(font);
	text[5].setFillColor(sf::Color::Red);
	text[5].setString("D - ruch w prawo");
	text[5].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_LINES + 1) * 1));

	text[6].setFont(font);
	text[6].setFillColor(sf::Color::Red);
	text[6].setString("A - ruch w lewo");
	text[6].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_LINES + 1) * 1));
	text[6].setCharacterSize(40);

	text[7].setFont(font);
	text[7].setFillColor(sf::Color::Red);
	text[7].setString("Lewy przycisk myszy - strzal");
	text[7].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_LINES + 1) * 1));
	text[7].setCharacterSize(40);
}

Author::~Author()
{
}

void Author::draw(sf::RenderWindow& window)
{
	window.draw(text[0]);
	window.draw(text[1]);
	window.draw(text[2]);
	window.draw(text[3]);
	window.draw(text[4]);
	window.draw(text[5]);
	window.draw(text[6]);
	window.draw(text[7]);
}

#include "Game.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <ctime>
#include <iostream>
#include "Menu.h"
#include "Author.h"

int main()
{
    /*
    Game game;

    game.run();
    //End the game
    return 0;
    */
    Game game;
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    Menu menu(window.getSize().x, window.getSize().y);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::KeyReleased:
                switch (event.key.code)
                {
                case sf::Keyboard::Up:
                    menu.MoveUp();
                    break;
                case sf::Keyboard::Down:
                    menu.MoveDown();
                    break;
                case sf::Keyboard::Return:
                    switch (menu.GetPressedItem())
                    {
                    case 0:
                        std::cout << "Play button has been pressed" << std::endl;
                        window.close();
                        game.run();
                        break;
                    case 1:
                        std::cout << "Author button has been pressed" << std::endl;
                        break;
                    case 2:
                        window.close();
                        break;
                    }
                    break;
                }
                break;
            case sf::Event::Closed:
                window.close();
                break;
            }
        }

        window.clear();
        menu.draw(window);
        window.display();
    }

    return 0;

}
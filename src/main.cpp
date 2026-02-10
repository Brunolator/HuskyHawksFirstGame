#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <cmath>
#include "TitleScreen.h"

int main()
{
    const unsigned int WIDTH = 1920;
    const unsigned int HEIGHT = 1080;
    sf::RenderWindow window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "Breakout by HuskyHawks");
    window.setFramerateLimit(60);

    TitleScreen titleScreen(&window, WIDTH, HEIGHT);

    // Main loop
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        window.clear();
        titleScreen.drawTitleScreen();
        window.display();
    }
}
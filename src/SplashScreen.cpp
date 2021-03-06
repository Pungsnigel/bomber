#include "stdafx.h"
#include "SplashScreen.h"

void SplashScreen::show(sf::RenderWindow &renderWindow)
{
    sf::Texture image;
    if(image.loadFromFile("../res/images/splashscreen.png") != true)
    {
        return;
    }

    sf::Sprite sprite(image);
    renderWindow.draw(sprite);
    renderWindow.display();

    sf::Event event;
    while(true)
    {
        while(renderWindow.pollEvent(event)) 
        {
            if (event.type == sf::Event::KeyPressed
                || event.type == sf::Event::MouseButtonPressed
                || event.type == sf::Event::Closed)
            {
                return;
            }
        }
    }
}
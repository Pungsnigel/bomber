#pragma once
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include <list>

class MainMenu
{
public:
    enum MenuResult { Nothing, Exit, Play };

    struct MenuItem
    {
    public:
        sf::Rect<int> rect;
        MenuResult action;
    };

    MenuResult show(sf::RenderWindow &window);

private:
    MenuResult GetMenuRespone(sf::RenderWindow &window);
    MenuResult HandleClick(int x, int y);
    std::list<MenuItem> m_menuItems;
};
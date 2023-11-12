#include "Hotbar.h"

void Hotbar::render(sf::RenderWindow* window)
{
	graphics.drawCustomTexture(120, 720, 1.5, 1.5, entity.hotbarTexture, window);
}

void Hotbar::update()
{
}

void Hotbar::handleEvents(sf::Event event)
{

}

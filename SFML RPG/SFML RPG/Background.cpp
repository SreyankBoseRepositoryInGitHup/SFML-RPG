#include "Background.h"

void Background::render(sf::RenderWindow* window)
{
	
	graphics.drawMultipleTextures(0, 0, 800, 800, 5, 5, entity.tileTextures[3], window);
}

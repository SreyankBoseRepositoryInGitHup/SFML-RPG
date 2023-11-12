#pragma once
#include "SFML/Graphics.hpp"

class Graphics
{
public:

	void drawCustomTexture(float posX, float posY, float scaleX, float scaleY, sf::Texture texture, sf::RenderWindow* window);
	void drawMultipleTextures(float posX, float posY, float endPosX, float endPosY, float scaleX, float scaleY, sf::Texture texture, sf::RenderWindow* window);

	sf::Sprite textureSprite;
};


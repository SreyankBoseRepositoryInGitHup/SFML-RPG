#include "Graphics.h"

void Graphics::drawCustomTexture(float posX, float posY, float scaleX, float scaleY, sf::Texture texture, sf::RenderWindow* window)
{
	this->textureSprite.setPosition(posX, posY);
	this->textureSprite.setScale(scaleX, scaleY);
	this->textureSprite.setTexture(texture);
	window->draw(textureSprite);
}

void Graphics::drawMultipleTextures(float posX, float posY, float endPosX, float endPosY, float scaleX, float scaleY, sf::Texture texture, sf::RenderWindow* window)
{
	int y = posY;
	int x = posX;

	while (x < endPosX) {
		while (y < endPosY) {

			this->textureSprite.setPosition(x, y);
			this->textureSprite.setScale(scaleX, scaleY);
			this->textureSprite.setTexture(texture);
			window->draw(textureSprite);

			y += scaleY;
		}
		x += scaleX;
		y = posY;
	}
}

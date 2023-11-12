#pragma once
#include "SFML/Graphics.hpp"

class Entity
{
private:
	void loadPlayerTextures();
	void loadTileTextures();
	void loadHotbarTexture();

public:
	Entity();

	sf::Texture tileTextures[6];
	sf::Texture playerTextures[4][2];
	sf::Texture hotbarTexture;
};


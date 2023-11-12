#include "Entity.h"

void Entity::loadPlayerTextures()
{
	this->playerTextures[0][0].loadFromFile("boy_up_1.png");
	this->playerTextures[0][1].loadFromFile("boy_up_2.png");

	this->playerTextures[1][0].loadFromFile("boy_down_1.png");
	this->playerTextures[1][1].loadFromFile("boy_down_2.png");

	this->playerTextures[2][0].loadFromFile("boy_left_1.png");
	this->playerTextures[2][1].loadFromFile("boy_left_2.png");

	this->playerTextures[3][0].loadFromFile("boy_right_1.png");
	this->playerTextures[3][1].loadFromFile("boy_right_2.png");
}

void Entity::loadTileTextures()
{
	this->tileTextures[0].loadFromFile("earth.png");
	this->tileTextures[1].loadFromFile("grass.png");
	this->tileTextures[2].loadFromFile("sand.png");
	this->tileTextures[3].loadFromFile("tree.png");
	this->tileTextures[4].loadFromFile("wall.png");
	this->tileTextures[5].loadFromFile("water.png");
}

void Entity::loadHotbarTexture()
{
	this->hotbarTexture.loadFromFile("Hotbar.png");
}

Entity::Entity()
{
	this->loadHotbarTexture();
	this->loadPlayerTextures();
	this->loadTileTextures();
}

#pragma once
#include"SFML/Graphics.hpp"
#include "Entity.h"

class Player
{
private:
	Entity entity;

	int playerSpeed = 5;
	int playerSize = 5;

	sf::Sprite playerSprite;
	std::string dir = "down";

	int spriteCounter{};
	int spriteNum{};
public:
	Player();

	void handleEvents(sf::Event event);
	void update();
	void render(sf::RenderWindow* window);
};


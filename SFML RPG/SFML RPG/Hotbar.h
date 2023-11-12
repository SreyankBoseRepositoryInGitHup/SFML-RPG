#pragma once
#include "SFML/Graphics.hpp"
#include "Graphics.h"
#include "Entity.h"

class Hotbar
{
private:
	Entity entity;
	Graphics graphics;
public:
	void render(sf::RenderWindow* window);
	void update();
	void handleEvents(sf::Event event);
};


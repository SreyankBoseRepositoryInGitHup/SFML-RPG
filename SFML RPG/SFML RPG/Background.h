#pragma once
#include "SFML/Graphics.hpp"
#include "Graphics.h"
#include "Entity.h"

class Background
{
private:
	Graphics graphics;
	Entity entity;

	const int window_width = 800;
	const int window_height = 800;
	const int tileSize = 5;

public:
	void render(sf::RenderWindow* window);
};


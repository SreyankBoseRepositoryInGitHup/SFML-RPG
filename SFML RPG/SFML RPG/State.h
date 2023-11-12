#pragma once
#include "SFML/Graphics.hpp"
#include "Player.h"
#include "Background.h"
#include "Hotbar.h"

class State 
{
private:
	const int PLAYING = 1;
	const int MENU = 2;
	const int SETTINGS = 3;

	Hotbar hotbar;
	Player player;
	Background background;

public:
	State();

	int gameState;

	void handleEvents(sf::Event event);
	void update();
	void render(sf::RenderWindow* window);
};


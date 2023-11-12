#pragma once
#include "SFML/Graphics.hpp"
#include "Config.h"
#include "State.h"


class Game
{
private:
	State state;
	Config config;

	sf::RenderWindow* window;
	sf::Event event;

	void initWindow();
	void render();
	void update();
	void handleSFMLEvents();

public:

	Game();
	virtual ~Game();
	
	void run();
};


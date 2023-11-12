#include "Game.h"

void Game::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(config.window_width, config.window_height), config.window_title);
	this->window->setFramerateLimit(config.window_framerate);
	this->window->setVerticalSyncEnabled(config.window_vsync);
}

Game::Game()
{
	this->initWindow();
}

Game::~Game()
{
	delete this->window;
}

void Game::render()
{
	this->window->clear();

	this->state.render(this->window);

	this->window->display();
}

void Game::update()
{
	this->state.update();
	this->handleSFMLEvents();
}

void Game::run()
{
	while (this->window->isOpen()) {

		this->update();

		this->render();
	}
}

void Game::handleSFMLEvents()
{
	while (this->window->pollEvent(this->event)) {

		if (this->event.type == this->event.Closed) {
			this->window->close();
		}
		this->state.handleEvents(event);
	}
}

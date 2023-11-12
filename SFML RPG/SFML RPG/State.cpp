#include "State.h"

State::State()
{
	this->gameState = this->PLAYING;
}

void State::handleEvents(sf::Event event)
{
	if (gameState == PLAYING) {
		this->player.handleEvents(event);
		this->hotbar.handleEvents(event);
	}
}

void State::update()
{
	if (gameState == PLAYING) {
		this->player.update();
		this->hotbar.update();
	}
}

void State::render(sf::RenderWindow* window)
{
	if (gameState == PLAYING) {
		this->background.render(window);
		this->player.render(window);
		this->hotbar.render(window);
	}
}

#include "Player.h"

Player::Player()
{
	this->playerSprite.setScale(playerSize, playerSize);
	this->playerSprite.setPosition(0, 0);
	this->playerSprite.setTexture(entity.playerTextures[1][0]);
}

void Player::handleEvents(sf::Event event)
{
	if (event.KeyPressed) {

		if (event.key.code == sf::Keyboard::W) {
			playerSprite.move(0, -playerSpeed);
			dir = "up";
		}
		else if (event.key.code == sf::Keyboard::S) {
			playerSprite.move(0, playerSpeed);
			dir = "down";
		}
		else if (event.key.code == sf::Keyboard::A) {
			playerSprite.move(-playerSpeed, 0);
			dir = "left";
		}
		else if (event.key.code == sf::Keyboard::D) {
			playerSprite.move(playerSpeed, 0);
			dir = "right";
		}
	}
}

void Player::update()
{
	if (dir == "up") {
		if (spriteNum == 0) {
			playerSprite.setTexture(entity.playerTextures[0][0]);
		}
		else if (spriteNum == 1) {
			playerSprite.setTexture(entity.playerTextures[0][1]);
		}
	}
	if (dir == "down") {
		if (spriteNum == 0) {
			playerSprite.setTexture(entity.playerTextures[1][0]);
		}
		else if (spriteNum == 1) {
			playerSprite.setTexture(entity.playerTextures[1][1]);
		}
	}
	if (dir == "left") {
		if (spriteNum == 0) {
			playerSprite.setTexture(entity.playerTextures[2][0]);
		}
		else if (spriteNum == 1) {
			playerSprite.setTexture(entity.playerTextures[2][1]);
		}
	}
	if (dir == "right") {
		if (spriteNum == 0) {
			playerSprite.setTexture(entity.playerTextures[3][0]);
		}
		else if (spriteNum == 1) {
			playerSprite.setTexture(entity.playerTextures[3][1]);
		}
	}

	spriteCounter++;
	if (spriteCounter > 10) {
		if (spriteNum == 0) {
			spriteNum = 1;
		}
		else if (spriteNum == 1) {
			spriteNum = 0;
		}
		spriteCounter = 0;
	}
}

void Player::render(sf::RenderWindow* window)
{
	
	window->draw(this->playerSprite);
}

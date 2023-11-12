#include "Config.h"

Config::Config()
{
	this->loadWindowConfig();
}
void Config::loadWindowConfig() 
{
	if (this->windowConfig.is_open())
	{
		std::getline(this->windowConfig, this->window_title);
		this->windowConfig >> this->window_width;
		this->windowConfig >> this->window_height;
		this->windowConfig >> this->window_framerate;
		this->windowConfig >> this->window_vsync;
	}

	this->windowConfig.close();
}

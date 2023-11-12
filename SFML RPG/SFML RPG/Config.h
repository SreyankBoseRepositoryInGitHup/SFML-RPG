#pragma once
#include <sstream>
#include <fstream>

class Config
{
private:
	std::ifstream windowConfig = std::ifstream("windowConfig.ini");

	void loadWindowConfig();
public:
	Config();

	std::string window_title;
	int window_width;
	int window_height;
	int window_framerate;
	bool window_vsync;
};


#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/AudioManager.h"
#include "Framework/GameState.h"
#include <string>
#include <iostream>

class Menu
{
public:
	Menu(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud);
	~Menu();

	void handleInput(float dt);
	void update(float dt);
	void render();

private:
	void beginDraw();
	void endDraw();

	sf::RenderWindow* window;
	Input* input;
	GameState* gameState;
	AudioManager* audio;

	sf::Text text;
	sf::Text text2;
	sf::Font font;
};


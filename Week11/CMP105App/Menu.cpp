#include "Menu.h"

Menu::Menu(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud)
{
	window = hwnd;
	input = in;
	gameState = gs;
	audio = aud;

	// initialise game objects
	audio->addMusic("sfx/cantina.ogg", "cantina");
}

Menu::~Menu()
{

}

void Menu::handleInput(float dt)
{

}

void Menu::update(float dt)
{

}

void Menu::render()
{
	beginDraw();

	endDraw();
}

void Menu::beginDraw()
{
	window->clear(sf::Color(100, 100, 100));
}

void Menu::endDraw()
{
	window->display();
}
#include "Menu.h"

Menu::Menu(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud)
{
	window = hwnd;
	input = in;
	gameState = gs;
	audio = aud;

	// initialise game objects
	font.loadFromFile("font/arial.ttf");
	text.setFont(font);
	text.setFillColor(sf::Color::White);
	text.setCharacterSize(55);
	text.setPosition(0, window->getSize().y / 2 - 150);

	text2.setFont(font);
	text2.setFillColor(sf::Color::White);
	text2.setCharacterSize(45);
	text2.setPosition(0, window->getSize().y / 2 - 10);
}

Menu::~Menu()
{

}

void Menu::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Space)) {
		input->setKeyUp(sf::Keyboard::Space);
		gameState->setCurrentState(State::LEVEL);
	}
}

void Menu::update(float dt)
{
	std::string s = "Welcome to the simple measurment game";
	text.setString(s);
	s = "Press SPACE to start measuring";
	text2.setString(s);
}

void Menu::render()
{
	beginDraw();
	window->draw(text);
	window->draw(text2);
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
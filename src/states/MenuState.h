#pragma once

#include "GameState.h"
#include "../Button.h"

class MenuState :
		public State
{
private:
	//Varaibles
	sf::RectangleShape background;
	sf::Font font;

	Button* test;

	void initFonts();
	void initKeybinds();
public:
	MenuState(sf::RenderWindow* window, std::map<std::string, int>* supportedKeys);
	virtual ~MenuState();

	void endState();
	void updateInput(const float& dt);
	void update(const float& dt);
	void render(sf::RenderTarget* target = NULL);
};
#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

#include "states/GameState.h"

class Game
{
private:
	//Veriables
	sf::RenderWindow* window;
	sf::Event sfEvent;

	sf::Clock dtClock;
	float dt;

	std::stack<State*> states;

	//Initialization
	void initWindow();
	void initStates();

public:
	Game();
	~Game();

	//Functions
	void endApplication();
	void updateDt();
	void updateSFMLEvents();
	void update();
	void render();
	void run();
};
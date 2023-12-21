#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include "State.h"

class GameState : public State
{
private:
	Entity player;

public:
	GameState(sf::RenderWindow* window);
	virtual ~GameState();
	
	void endState();
	void updateKeybinds(const float& dt);
	void update(const float& dt);
	void render(sf::RenderTarget* target = NULL);
};
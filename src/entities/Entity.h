#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <stack>
#include <map>

class Entity
{
private:

protected:
	sf::RectangleShape shape;
	float movementSpeed;

public:
	Entity();
	virtual ~Entity();

	//Functions
	virtual void move(const float& dt, const float dir_x, const float dir_y);
	virtual void update(const float& dt);
	virtual void render(sf::RenderTarget* target);
};
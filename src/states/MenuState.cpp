#include "MenuState.h"


void MenuState::initFonts()
{
	if (!this->font.loadFromFile("../../Fonts/calibri.ttf"))
		throw("ERROR::MENU_STATE::COULD NOT LOAD FONT");
}

void MenuState::initKeybinds()
{
	std::ifstream ifs("../config/gamestate_keys.ini");

	if (ifs.is_open())
	{
		std::string key = "";
		std::string key2 = "";

		while (ifs >> key >> key2)
		{
			this->keybinds[key] = this->supportedKeys->at(key2);
		}
	}

	ifs.close();
}

MenuState::MenuState(sf::RenderWindow* window, std::map<std::string, int>* supportedKeys)
	: State(window, supportedKeys)
{
	this->initFonts();
	this->initKeybinds();

	this->background.setSize(sf::Vector2f(this->window->getSize().x, this->window->getSize().y));
	this->background.setFillColor(sf::Color::Magenta);
}

MenuState::~MenuState()
{
}

void MenuState::endState()
{
	std::cout << "end gamestate" << std::endl;
}

void MenuState::updateInput(const float& dt)
{
	this->checkForQuit();


}

void MenuState::update(const float& dt)
{
	this->updateMousePos();
	this->updateInput(dt);
}

void MenuState::render(sf::RenderTarget* target)
{
	if (!target)
		target = this->window;

	target->draw(this->background);
}

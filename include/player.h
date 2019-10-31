#pragma once
#include "SFML/Graphics.hpp"
#include <Box2D/Box2D.h>
#include "globals.h"

class PlayerCharacter
{
	
public:
	PlayerCharacter();
	void InitPlayer(b2World& world);
	void UpdatePlayer(float deltaTime);
	void Draw(sf::RenderWindow& window);
	void PlayerMove();
	
private:
	b2Body* playerBody_ = nullptr;
	sf::Texture playerTexture_; 
	sf::Sprite playerSprite_;
	sf::RectangleShape boxRectDebug_;
	sf::Vector2f playerPosition_ = sf::Vector2f(400, 300);
	const sf::Vector2f boxSize = sf::Vector2f(136, 102);
	
};
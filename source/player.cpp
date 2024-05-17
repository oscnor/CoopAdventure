#include "../include/player.hpp"

Player::Player(){}
Player::~Player(){}

// Getters
sf::Vector2f Player::getPosition(){ return position; }
int Player::getHp(){ return hitPoints; }
int Player::getHpPercent(){ return hpPercent; }

// Setters
void Player::setPosition(sf::Vector2f newPosition)
{
    position = newPosition;
}
void Player::setPosition(float newPosX, float newPosY)
{
    position.x = newPosX;
    position.y = newPosY;

}

void Player::setHp(int newHp)
{
    hitPoints = newHp;
    hpPercent = hitPoints/100;
}
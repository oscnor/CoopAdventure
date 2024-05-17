#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML/Graphics.hpp>

class Player
{
public:
    Player();
    ~Player();

    // Getters
    sf::Vector2f getPosition();
    int getHp();
    int getHpPercent();

    // Setters
    void setPosition(sf::Vector2f newPosition);
    void setPosition(float x, float y);

    void setHp(int newHp);

private:
    sf::Vector2f position;
    int hitPoints;
    int hpPercent;

};
#endif
#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include <vector>
#include <iostream>

// Enemy - Abstract Base Class
class Enemy {
protected:
    int health;
    std::vector<std::string> taunts;

public:
    Enemy();
    virtual void TauntPlayer() = 0;
    virtual void NormalAttack() = 0;
    virtual const std::string& GetSpeciesName() const = 0;
    virtual ~Enemy();
};

#endif // ENEMY_H

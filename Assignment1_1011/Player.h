#pragma once
#include "GameObject.h"
#include <string>

class Player : public GameObject {
protected:
    std::string name;
    int health;

public:
    Player(const std::string& name);
    virtual void SpecialAttack() = 0;
    virtual ~Player();
};


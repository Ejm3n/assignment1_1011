#pragma once
#include "Enemy.h"
#include <string>
class Orc : public Enemy {
public:
    Orc();
    static const std::string speciesName;
    void NormalAttack() override;
    void TauntPlayer() override;
};


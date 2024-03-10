#pragma once
#include "Enemy.h"
#include <string>
class Orc : public Enemy {
public:
    Orc();
    void NormalAttack() override;
    void TauntPlayer() override;
};


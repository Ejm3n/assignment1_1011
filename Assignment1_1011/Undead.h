

#include "Enemy.h"

class Undead : public Enemy {
public:
    Undead();
    void NormalAttack() override;
    void TauntPlayer() override;
};


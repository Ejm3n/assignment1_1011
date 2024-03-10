

#include "Enemy.h"

class Undead : public Enemy {
public:
    Undead();
    static const std::string speciesName;
    void NormalAttack() override;
    void TauntPlayer() override;
};


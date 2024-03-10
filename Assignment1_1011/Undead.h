

#include "Enemy.h"

class Undead : public Enemy {
public:
    Undead();
    static const std::string speciesName;
    const std::string& GetSpeciesName() const override { return speciesName; }
    void NormalAttack() override;
    void TauntPlayer() override;
};


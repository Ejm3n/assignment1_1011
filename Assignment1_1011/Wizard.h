
#include "Player.h"

class Wizard : public Player {
public:
    Wizard(const std::string& name);
    static const std::string specialAttackName;
    void NormalAttack() override;
    void SpecialAttack() override;
    const std::string& GetSpecialAttack() const override { return specialAttackName; }
};


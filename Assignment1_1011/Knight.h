
#include "Player.h"

class Knight : public Player {
public:
    Knight(const std::string& name);
    static const std::string specialAttackName;
    void NormalAttack() override;
    void SpecialAttack() override;
    const std::string& GetSpecialAttack() const override { return specialAttackName; }
};


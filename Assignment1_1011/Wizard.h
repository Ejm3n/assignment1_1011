
#include "Player.h"

class Wizard : public Player {
public:
    Wizard(const std::string& name);
    void NormalAttack() override;
    void SpecialAttack() override;
};


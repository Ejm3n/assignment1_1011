
#include "Player.h"

class Knight : public Player {
public:
    Knight(const std::string& name);
    void NormalAttack() override;
    void SpecialAttack() override;
};


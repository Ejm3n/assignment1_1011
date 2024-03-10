#include "Orc.h"
#include <iostream>

Orc::Orc() {
    taunts = { "Orcish grunt", "Orcish roar" };
}

void Orc::NormalAttack() {
    std::cout << "Orc swings a club." << std::endl;
}

void Orc::TauntPlayer() {
    std::cout << "Orc taunts: " << taunts[rand() % taunts.size()] << std::endl;
}

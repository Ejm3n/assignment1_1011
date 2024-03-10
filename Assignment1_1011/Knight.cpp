#include "Knight.h"
#include <iostream>

Knight::Knight(const std::string& name) : Player(name) {}

void Knight::NormalAttack() {
    std::cout << name << " swings a sword." << std::endl;
}

const std::string Knight::specialAttackName = "Whirlwind Slash";

void Knight::SpecialAttack() {
    std::cout << name << " performs a whirlwind slash." << std::endl;
}

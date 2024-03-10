#include "Knight.h"
#include <iostream>

Knight::Knight(const std::string& name) : Player(name) {}

void Knight::NormalAttack() {
    std::cout << name << " swings a sword." << std::endl;
}

void Knight::SpecialAttack() {
    std::cout << name << " performs a whirlwind slash." << std::endl;
}

#include "Wizard.h"
#include <iostream>

Wizard::Wizard(const std::string& name) : Player(name) {}

void Wizard::NormalAttack() {
    std::cout << name << " hits with a magic missile." << std::endl;
}

const std::string Wizard::specialAttackName = "Fireball";

void Wizard::SpecialAttack() {
    std::cout << name << " casts "<< specialAttackName << std::endl;
}

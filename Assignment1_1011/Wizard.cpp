#include "Wizard.h"
#include <iostream>

Wizard::Wizard(const std::string& name) : Player(name) {}

void Wizard::NormalAttack() {
    std::cout << name << " hits with a magic missile." << std::endl;
}

void Wizard::SpecialAttack() {
    std::cout << name << " casts a powerful spell." << std::endl;
}

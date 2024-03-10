#include "Undead.h"
#include <iostream>

Undead::Undead() {
    taunts = { "Undead moans", "Undead whispers" };
}

void Undead::NormalAttack() {
    std::cout << "Undead reaches with chilling touch." << std::endl;
}

void Undead::TauntPlayer() {
    std::cout << "Undead taunts: " << taunts[rand() % taunts.size()] << std::endl;
}

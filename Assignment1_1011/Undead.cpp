#include "Undead.h"
#include <iostream>

Undead::Undead() {
    taunts = { "*grunts in a mean way*", "The undead attempts to say something, but its lower jaw fell off", "It stares rudely but doesnt actually say anything" };
}

void Undead::NormalAttack() {
    std::cout << "Undead reaches with chilling touch." << std::endl;
}

void Undead::TauntPlayer() {
    std::cout << "Undead taunts: " << taunts[rand() % taunts.size()] << std::endl;
}

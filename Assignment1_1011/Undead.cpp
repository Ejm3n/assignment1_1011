#include "Undead.h"
#include <iostream>

Undead::Undead() {
    taunts = { "*Grunts in a mean way*", "The undead attempts to say something, but its lower jaw fell off", "It stares rudely but doesnt actually say anything" };
}

const std::string Undead::speciesName = "Undead";

void Undead::NormalAttack() {
    std::cout << "Undead attacks with chilling touch." << std::endl;
}

void Undead::TauntPlayer() {
    std::cout << "Undead taunts: " << taunts[rand() % taunts.size()] << std::endl;
}

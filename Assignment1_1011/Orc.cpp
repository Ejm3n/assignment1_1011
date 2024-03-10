#include "Orc.h"
#include <iostream>

Orc::Orc() {
    taunts = { "You swing like an elf", "My grandma murders better than you, and she's dead", "Never been stabbed before? you'll get used to it." };
}

const std::string Orc::speciesName = "Orc";

void Orc::NormalAttack() {
    std::cout << speciesName <<" swings a club." << std::endl;
}

void Orc::TauntPlayer() {
    std::cout << speciesName<<" taunts: " << taunts[rand() % taunts.size()] << std::endl;
}

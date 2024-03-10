﻿#include <iostream>
#include <string>
#include <memory>
#include <ctime>
#include <cstdlib>

#include "Wizard.h"
#include "Knight.h"
#include "Orc.h"
#include "Undead.h"

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    std::cout << "Welcome to the Epic Fantasy Duel" << std::endl;
    std::string characterType;
    std::string characterName;
    // Player setup
    do
    {      
        std::cout << "Choose your character class (Wizard/Knight): ";
        std::getline(std::cin, characterType);       
    } while (characterType != "Wizard" && characterType != "Knight");
    std::cout << "Enter your character's name: ";
    std::getline(std::cin, characterName);

    std::unique_ptr<Player> playerCharacter;
    if (characterType == "Wizard") {
        playerCharacter = std::make_unique<Wizard>(characterName);
    }
    else {
        playerCharacter = std::make_unique<Knight>(characterName);
    }
    // Player summary
    std::cout << "\nPlayer Class: " << characterType << std::endl;
    std::cout << "Player Name: " << characterName << std::endl;
    std::cout << "Player Health: 100"<< std::endl;

    std::string ready;
    std::cout << "\nAre you ready to start the battle? (yes/no): ";
    std::getline(std::cin, ready);

    if (ready == "yes") {
        // Enemy creation
        std::unique_ptr<Enemy> enemyCharacter;
        if (rand() % 2 == 0) {
            enemyCharacter = std::make_unique<Orc>();
        }
        else {
            enemyCharacter = std::make_unique<Undead>();
        }
        // Enemy summary
        std::cout << "\Enemy Species: " << enemyCharacter->GetSpeciesName() << std::endl;
        std::cout << "Enemy Health: 100" << std::endl;

        std::cout << "The " <<enemyCharacter->GetSpeciesName() <<" approaches" << std::endl;

        enemyCharacter->TauntPlayer();
        playerCharacter->NormalAttack();
        enemyCharacter->TauntPlayer();
        playerCharacter->SpecialAttack();
        enemyCharacter->NormalAttack();
        enemyCharacter->NormalAttack();
        playerCharacter->SpecialAttack();
        enemyCharacter->TauntPlayer();
        playerCharacter->SpecialAttack();

        std::cout << "\nThe "<<enemyCharacter->GetSpeciesName()<< " is defeated! Victory is yours!" << std::endl;
    }
    else {
        std::cout << "Come back when you're ready to fight" << std::endl;
    }

    return 0;
}

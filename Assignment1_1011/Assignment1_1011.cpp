#include <iostream>
#include <string>
#include <memory>
#include <ctime>
#include <cstdlib>

// Include your class definitions
#include "Wizard.h"
#include "Knight.h"
#include "Orc.h"
#include "Undead.h"

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    // Welcome message
    std::cout << "Welcome to the Epic Fantasy Game!" << std::endl;

    // Player setup
    std::string characterType;
    std::string characterName;
    std::cout << "Choose your character class (Wizard/Knight): ";
    std::getline(std::cin, characterType);
    std::cout << "Enter your character's name: ";
    std::getline(std::cin, characterName);

    // Player character creation
    std::unique_ptr<Player> playerCharacter;
    if (characterType == "Wizard") {
        playerCharacter = std::make_unique<Wizard>(characterName);
    }
    else { // Default to Knight if input is not recognized
        playerCharacter = std::make_unique<Knight>(characterName);
    }

    // Player summary
    std::cout << "\nPlayer Type: " << characterType << std::endl;
    std::cout << "Player Name: " << characterName << std::endl;
    std::cout << "Default Health: 100" << std::endl;

    // Ready for battle
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

        // Battle sequence
        std::cout << "A wild enemy appears!" << std::endl;

        enemyCharacter->TauntPlayer();
        playerCharacter->NormalAttack();
        enemyCharacter->TauntPlayer();
        playerCharacter->SpecialAttack();
        enemyCharacter->NormalAttack();
        enemyCharacter->NormalAttack();
        playerCharacter->SpecialAttack();
        enemyCharacter->TauntPlayer();
        playerCharacter->SpecialAttack();

        // Victory message
        std::cout << "\nThe enemy is defeated! Victory is yours!" << std::endl;
    }
    else {
        std::cout << "Come back when you're ready to fight!" << std::endl;
    }

    return 0;
}

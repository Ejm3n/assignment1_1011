#pragma once
#include "Enemy.h"
#include <string>
class Orc : Enemy
{
public:
	static std::string speciesName;
	std::string taunts[3] 
		= { "You swing like an elf", "My grandma murders better than you, and she's dead", "Never been stabbed before? you'll get used to it." };

	std::string TauntPlayer(int taunt) {
		return taunts[taunt];
	}
};


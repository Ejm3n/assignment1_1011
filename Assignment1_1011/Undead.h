#pragma once
#include "Enemy.h"
#include <string>
class Undead : Enemy
{
public:
	static std::string speciesName;
	std::string taunts[3]
		= { "*grunts in a mean way*", "The undead attempts to say something, but its lower jaw fell off", "It stares rudely but doesnt actually say anything" };

	std::string TauntPlayer(int taunt) {
		return taunts[taunt];
	}
};


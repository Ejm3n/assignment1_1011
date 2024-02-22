#pragma once
#include "Enemy.h"
#include <string>
class Orc : Enemy
{
public:
	static std::string speciesName;
	std::string* taunts;

	void TauntPlayer();
};


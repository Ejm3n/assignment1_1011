#pragma once
#include "Enemy.h"
#include <string>
class Undead : Enemy
{
	static std::string SpecialAttackName;
	int SpecialAttackAmount;

	void SpecialAttack();
};


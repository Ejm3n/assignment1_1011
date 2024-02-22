#pragma once
#include "GameObject.h"
#include <string>
class Player: GameObject
{
public:
	std::string Name;
	int Health;

	void NormalAttack(int Power);
	virtual void SpecialAttack();
	void Acessors();
	void Mutators();
};


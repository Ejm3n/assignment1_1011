#pragma once
#include "GameObject.h"
class Enemy : GameObject
{
public:
	int Health;
	

	void NormalAttack(int Power);
	virtual std::string TauntPlayer();
	void Accessors();
	void Mutators();
	void SetName();
};


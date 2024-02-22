#pragma once
#include "GameObject.h"
class Enemy : GameObject
{
public:
	int Health;

	void NormalAttack(int Power);
	virtual void TauntPlayer();
	void Accessors();
	void Mutators();
};


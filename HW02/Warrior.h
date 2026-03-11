// Warrior.h

#include <iostream>
#include <string>
#include "Player.h"

#pragma once
class Warrior : public Player
{
public:
	Warrior(std::string InNickName);

	void Attack();
	void UseSkill();
	void UseUlti();
	void TakeDam(double OpponenetATT);


};
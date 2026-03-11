// Archer.h


#include <iostream>
#include <string>
#include "Player.h"
#pragma once
class Archer : public Player
{
public:
	Archer(std::string InNickName);

	void Attack();
	void UseSkill();
	void UseUlti();
	void TakeDam(double OpponenetATT);


};
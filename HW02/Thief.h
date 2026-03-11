// Thief.h


#include <iostream>
#include <string>
#include "Player.h"
#pragma once
class Thief : public Player
{
public:
	Thief(std::string InNickName);

	void Attack();
	void UseSkill();
	void UseUlti();
	void TakeDam(double OpponenetATT);


};
// Magician.h


#include <iostream>
#include <string>
#include "Player.h"
#pragma once
class Magician : public Player
{
public:
	Magician(std::string InNickName);

	void Attack();
	void UseSkill();
	void UseUlti();
	void TakeDam(double OpponenetATT);


};
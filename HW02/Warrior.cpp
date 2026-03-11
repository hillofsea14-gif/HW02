// Worrior.cpp

#include <iostream>
#include <string>
#include "Player.h"
#include "Warrior.h"


Warrior::Warrior(std::string InNickName) : Player(InNickName)
{
	Hp *= 3.0;
	Mp *= 1.5;
	ATT *= 3.0;
	DEF *= 3.0;
	SRatio += 100.0f;
	URatio += 200.0f;

	printPlayerStatus();


}

void Warrior::Attack()
{
	std::cout << "검을 휘두릅니다!\n" << std::endl;
	return;
}
void Warrior::UseSkill()
{
	std::cout << "스킬!! 강하게 베기!!!\n" << std::endl;
	return;
}
void Warrior::UseUlti()
{
	std::cout << "기운이 당신에게 모이기 시작합니다.\n 일!격!필!살!\n 강하게 내려찍기!!!\n" << std::endl;
	return;
}
void Warrior::TakeDam(double OpponenetATT)
{
	std::cout << OpponenetATT << " 만큼의 피해를 입었습니다." << std::endl;
	return;
}
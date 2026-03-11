// Thief.cpp


#include <iostream>
#include <string>
#include "Player.h"
#include "Thief.h"


Thief::Thief(std::string InNickName) : Player(InNickName)
{
	Hp *= 2.0;
	Mp *= 2.0;
	ATT *= 2.5;
	DEF *= 2.5;
	SRatio += 200.0f;
	URatio += 250.0f;

	printPlayerStatus();


}

void Thief::Attack()
{
	std::cout << "투척용 검을 날립니다.\n" << std::endl;
	return;
}
void Thief::UseSkill()
{
	std::cout << "스킬!! 약점 찌르기!\n" << std::endl;
	return;
}
void Thief::UseUlti()
{
	std::cout << "당신은 어둠속으로 사라집니다.\n 적의 뒤에서 나타난 당신은 적에게 치명적 일격을 가합니다.\n 몰래 급소 공격?\n" << std::endl;
	return;
}
void Thief::TakeDam(double OpponenetATT)
{
	std::cout << OpponenetATT << " 만큼의 피해를 입었습니다." << std::endl;
	return;
}
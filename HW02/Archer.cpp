// Archer.cpp


#include <iostream>
#include <string>
#include "Player.h"
#include "Archer.h"


Archer::Archer(std::string InNickName) : Player(InNickName)
{
	Hp *= 2.0;
	Mp *= 2.0;
	ATT *= 3.0;
	DEF *= 3.0;
	SRatio += 150.0f;
	URatio += 180.0f;

	printPlayerStatus();


}

void Archer::Attack()
{
	std::cout << "화살을 발사합니다!\n" << std::endl;
	return;
}
void Archer::UseSkill()
{
	std::cout << "스킬!! 10발 속사!\n" << std::endl;
	return;
}
void Archer::UseUlti()
{
	std::cout << "활에 기운을 모읍니다.\n 기운이 화살끝으로 모입니다.\n 강력한 화살이 적의 약점을 관통합니다!!!\n" << std::endl;
	return;
}
void Archer::TakeDam(double OpponenetATT)
{
	std::cout << OpponenetATT << " 만큼의 피해를 입었습니다." << std::endl;
	return;
}
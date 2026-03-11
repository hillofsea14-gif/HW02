// Magician.cpp


#include <iostream>
#include <string>
#include "Player.h"
#include "Magician.h"


Magician::Magician(std::string InNickName) : Player(InNickName)
{
	Hp *= 1.8;
	Mp *= 4.0;
	ATT *= 3.5;
	DEF *= 1.5;
	SRatio += 300.0f;
	URatio += 600.0f;

	printPlayerStatus();


}

void Magician::Attack()
{
	std::cout << "\"파이어볼~~\" 작은 화염구가 적에게 날아갑니다.\n" << std::endl;
	return;
}
void Magician::UseSkill()
{
	std::cout << "\"파이어 월!!\" 불의 장막이 적을 휘감습니다.\n" << std::endl;
	return;
}
void Magician::UseUlti()
{
	std::cout << "\"불의 정령이여... @#$!@$@#%#$@$!...\" 주문을 외우기 시작합니다.\n \"거대한 불꽃 안에서 사라져라!!!\"\n \"인페르노!!!\"\n" << std::endl;
	return;
}
void Magician::TakeDam(double OpponenetATT)
{
	std::cout << OpponenetATT << " 만큼의 피해를 입었습니다." << std::endl;
	return;
}
// Main.cpp

#include <iostream>
#include <string>
#include "Player.h"
#include "Warrior.h"
#include "Archer.h"
#include "Magician.h"
#include "Thief.h"

int main(void)
{
	Player* player01 = nullptr;
	std::string nickname;
	std::string jobs[] = { "전사", "궁수", "마법사", "도적" };
	int jobchoice = 0;

	std::cout << "닉네임을 입력하세요." << std::endl;
	std::cin >> nickname;

	do
	{
		std::cout << nickname << " 님! 당신의 직업을 골라주세요." << std::endl;

		for (int i = 0; i < 4; ++i)
		{
			std::cout << (i + 1) << ". " << jobs[i] << std::endl;
		}

		std::cout << "선택: ";
		std::cin >> jobchoice;

		if (jobchoice == 1)
		{
			player01 = new Warrior(nickname);
		}
		else if (jobchoice == 2)
		{
			player01 = new Archer(nickname);
		}
		else if (jobchoice == 3)
		{
			player01 = new Magician(nickname);
		}
		else if (jobchoice == 4)
		{
			player01 = new Thief(nickname);
		}
		else
		{
			std::cout << "잘못된 입력입니다." << std::endl;
		}

	} while (jobchoice <= 0 || 4 < jobchoice);

	player01->Attack();
	player01->UseSkill();
	player01->UseUlti();
	player01->TakeDam(150.0);

	if (player01 != nullptr)
	{
		delete player01;
		player01 = nullptr;
	}

	return 0;
}
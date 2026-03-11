// Player.cpp

#include "Player.h"
#include <iostream>
#include <string>


Player::Player(std::string InNickName)
	: NickName(InNickName)
	, Level(1)
	, Hp(100.0)
	, Mp(100.0)
	, ATT(10.0)
	, DEF(10.0)
	, SRatio(150.0f)
	, URatio(300.0f)
{
}



void Player::printPlayerStatus() const
{
	std::cout << "당신의 현재상태입니다." << std::endl;
	std::cout << JobName << " " << NickName << ", 당신의 레벨은 " << Level << " 입니다.\n"
		<< " 현재 체력은 " << Hp << " 입니다."
		<< " 현재 마력은 " << Mp << " 입니다.\n"
		<< "공격력은 " << ATT << " 이고, 방어력은 " << DEF << " 입니다.\n"
		<< "스킬계수와 궁극기 계수는 각각 " << SRatio << ", " << URatio << " 이군요.\n"
		<< "그럼 앞으로의 여정에도 행운이 깃들길...\n\n" << std::endl;
}







//Getter()
void Player::GetLevel() const
{
	std::cout << "현재 레벨: " << Level << std::endl;
	return;
}
void Player::GetHp() const
{
	std::cout << "현재 Hp: " << Hp << std::endl;
	return;
}
void Player::GetMp() const
{
	std::cout << "현재 Mp: " << Mp << std::endl;
	return;
}
void Player::GetATT() const
{
	std::cout << "현제 공격력: " << ATT << std::endl;
	return;
}
void Player::GetDEF() const
{
	std::cout << "현재 방어력: " << DEF << std::endl;
	return;
}
void Player::GetSRatio() const
{
	std::cout << "현재 스킬계수: " << SRatio << std::endl;
	return;
}
void Player::GetURatio() const
{
	std::cout << "현재 궁극기 계수: " << URatio << std::endl;
	return;
}
void Player::GetNickName() const
{
	std::cout << "당신의 닉네임은 " << NickName << " 입니다." << std::endl;
	return;
}
void Player::GetJobName() const
{
	std::cout << "당신의 직업은 " << JobName << " 입니다. " << std::endl;
	return;
}


//Setter()
void Player::SetLevel(int InLevel)
{
	if (0 < InLevel && InLevel < 301)
	{
		std::cout << "레벨 설정.\n" << "레벨을 " << Level << "에서 ";
		Level = InLevel;
		std::cout << Level << "(으)로 변경하였습니다." << std::endl;
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
		return;
	}
	return;
}
void Player::AddLevel()
{
	if (Level < 300)
	{
		std::cout << "레벨 업!!!" << std::endl;
		Level += 1;
	}
	else
	{
		std::cout << "더 이상 레벨업을 할 수 없습니다." << std::endl;
		return;
	}
	std::cout << "현재 레벨: " << Level << std::endl;
	return;
}
void Player::SetHp(double InHp)
{
	if (0 < InHp && InHp < 400.0)
	{
		std::cout << "Hp 설정.\n" << "Hp를 " << Hp << "에서 ";
		Hp = InHp;
		std::cout << Hp << "(으)로 변경하였습니다." << std::endl;
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
		return;
	}
	return;
}
void Player::SetMp(double InMp)
{
	if (0 < InMp && InMp < 400.0)
	{
		std::cout << "Mp 설정.\n" << "Mp를 " << Mp << "에서 ";
		Mp = InMp;
		std::cout << Mp << "(으)로 변경하였습니다." << std::endl;
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
		return;
	}
	return;
}
void Player::SetATT(double InATT)
{
	if (0 < InATT && InATT < 600.0)
	{
		std::cout << "공격력을 설정합니다." << std::endl;
		ATT = InATT;
		std::cout << "현재 공격력은 " << ATT << "입니다." << std::endl;
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
		return;
	}
	return;
}
void Player::SetDEF(double InDEF)
{
	if (0 < InDEF && InDEF < 600.0)
	{
		std::cout << "방어력을 설정합니다." << std::endl;
		ATT = InDEF;
		std::cout << "현재 방어력은 " << DEF << "입니다." << std::endl;
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
		return;
	}
	return;
}
void Player::SetSRatio(float InSRatio)
{
	if (0 < InSRatio && InSRatio < 500.1)
	{
		std::cout << "스킬계수를 설정합니다." << std::endl;
		SRatio = InSRatio;
		std::cout << "현재 스킬계수는 " << SRatio << "입니다." << std::endl;
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
		return;
	}
}
void Player::SetURatio(float InURatio)
{
	if (0 < InURatio && InURatio < 500.1)
	{
		std::cout << "궁극기 스킬계수를 설정합니다." << std::endl;
		SRatio = InURatio;
		std::cout << "현재 궁극기 스킬계수는 " << URatio << "입니다." << std::endl;
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
		return;
	}
}
void Player::SetNickName(std::string InNickName)
{
	NickName = InNickName;
	std::cout << "앞으로 " << NickName << "(라)고 불러드리죠." << std::endl;
	return;
}
void Player::SetJobName(std::string InJobName)
{
	std::cout << "직업을 변경합니다." << std::endl;
	JobName = InJobName;
	std::cout << "이제부터 당신의 직업은 " << JobName << "입니다." << std::endl;
	return;
}
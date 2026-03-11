// Player.h

#pragma once
#include <string>

class Player
{
public:
	Player(std::string InNickName);
	virtual void Attack() = 0;
	virtual void UseSkill() = 0;
	virtual void UseUlti() = 0;
	virtual void TakeDam(double OpponentATT) = 0;

	void printPlayerStatus() const;

	//Getter()
	void GetLevel() const;
	void GetHp() const;
	void GetMp() const;
	void GetATT() const;
	void GetDEF() const;
	void GetSRatio() const;
	void GetURatio() const;
	void GetNickName() const;
	void GetJobName() const;

	//Setter()
	void SetLevel(int InLevel);
	void AddLevel();
	void SetHp(double InHp);
	void SetMp(double InMp);
	void SetATT(double InATT);
	void SetDEF(double InDEF);
	void SetSRatio(float InSRatio);
	void SetURatio(float InURatio);
	void SetNickName(std::string InNickName);
	void SetJobName(std::string InJobName);

protected:
	int Level;
	double Hp;
	double Mp;
	double ATT;
	double DEF;
	float SRatio;
	float URatio;
	std::string NickName;
	std::string JobName;
};

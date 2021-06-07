#pragma once
#include "Account.h"



class SavingAccount : public Account {
private:
	double rate;
	int savingDate;
	int savingMoney;
public:
	SavingAccount(int money, string name, double rate,int savingMoney, int savingDate);
	double	GetRate();
	int GetSavingMoney();
	int GetSavingDate();
	void ShowSavingAccountInfo();
};
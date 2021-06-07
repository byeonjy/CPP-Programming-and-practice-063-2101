#pragma once
#include "SavingAccount.h"
#include <vector>

class SavingAccountDB
{
private:
	vector <SavingAccount> DB;
public:
	SavingAccountDB();
	void addAccount(string name, double rate, int money, int date);
	void showAllSavingAccount();
	void showSavingAccount(int accID);
	double getRate(int idx);
	int getDate(int idx);
	int getMoney(int idx);
	int lengthSavingAccountDB();
	void sortSavingAccount();
	int searchSavingAccount(int start_index, int end_index, int accID);
};
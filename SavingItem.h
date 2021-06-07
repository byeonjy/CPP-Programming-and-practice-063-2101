#pragma once
#include <iostream>

class SavingItem
{
private:
	double Rate; //이자율
	int	savingMoneyRate; //적금 가능 최대금액
	int savingDate; //적금 개월수

public:
	SavingItem(double a,int b, int c);
	void setRate(double Rate);
	void setMoneyRate(int savingMoneyRate);
	void setDate(int savingDate);
	double getRate();
	int getMoneyRate();
	int	getDate();
	void getSavingItemInfo(int CatalogueNumber);
};


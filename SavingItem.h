#pragma once
#include <iostream>

class SavingItem
{
private:
	double Rate; //������
	int	savingMoneyRate; //���� ���� �ִ�ݾ�
	int savingDate; //���� ������

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


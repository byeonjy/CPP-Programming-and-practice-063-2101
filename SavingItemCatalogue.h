#pragma once
#include"SavingItem.h"
#include<vector>
#include <iostream>

using namespace std;

class SavingItemCatalogue
{
private:
	vector <SavingItem> Item;

public:
	SavingItemCatalogue();
	void setSavingItemCatalogue();
	void changeSavingItemCatalogue();
	double getSavingItemRate(int number);
	int getSavingItemMoneyRate(int number);
	int	getSavingItemDate(int number);
	void getAllSavingItemCatalogue();
	void getSavingItemCatalogue();
	void choiceSavingItemCatalogue(int idx);
};

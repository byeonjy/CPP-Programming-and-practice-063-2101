#pragma once
#include "SavingAccount.h";

SavingAccount::SavingAccount(int money, string name, double rate, int savingMoney, int savingDate)
	: Account(money,name), rate(rate), savingMoney(savingMoney), savingDate(savingDate) {}

double SavingAccount::GetRate() {
	return this->rate;
}

int SavingAccount::GetSavingMoney() {
	return this->savingMoney;
}

int SavingAccount::GetSavingDate() {
	return this->savingDate;
}

void SavingAccount::ShowSavingAccountInfo() {
	cout << "���¹�ȣ: " << GetAccID() << endl;
	cout << "��    ��: " << GetName() << endl;
	cout << "���ݱݸ�: " << rate << endl;
	cout << "���Աݾ�: " << savingMoney << endl;
	cout << "���ԱⰣ: " << savingDate << endl;
}
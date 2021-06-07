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
	cout << "계좌번호: " << GetAccID() << endl;
	cout << "이    름: " << GetName() << endl;
	cout << "적금금리: " << rate << endl;
	cout << "납입금액: " << savingMoney << endl;
	cout << "납입기간: " << savingDate << endl;
}
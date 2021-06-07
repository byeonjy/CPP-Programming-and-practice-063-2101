#pragma once
#include "SavingAccountDB.h"
#include<algorithm>


bool compareFunction(const SavingAccount& o1, const SavingAccount& o2) {
	return o1.GetAccID() < o2.GetAccID();
}

SavingAccountDB::SavingAccountDB() {}

void SavingAccountDB::addAccount(string name, double rate, int money, int date) 
{
	int balance = 0;
	if (DB.size() == 0)
	{
		DB.push_back(SavingAccount(balance, name, rate, money, date));
	}
	else
	{
		while (true)
		{
			SavingAccount temp = SavingAccount(balance, name, rate, money, date);
			int index = searchSavingAccount(0, lengthSavingAccountDB() - 1, temp.GetAccID());
			if (index == -1) {
				DB.push_back(temp);
				break;
			}
		}
	}
	sortSavingAccount();
}

void SavingAccountDB::showAllSavingAccount() {
	for (int i = 0; i < DB.size(); i++) {
		DB[i].ShowSavingAccountInfo();
	}
}

void SavingAccountDB::showSavingAccount(int accID) {
	int idx = searchSavingAccount(0, lengthSavingAccountDB() - 1, accID);
	DB[idx].ShowSavingAccountInfo();
}

double SavingAccountDB::getRate(int idx) {
	return DB[idx].GetRate();
}

int SavingAccountDB::getDate(int idx) {
	return DB[idx].GetSavingDate();
}

int SavingAccountDB::getMoney(int idx) {
	return DB[idx].GetSavingMoney();
}

int SavingAccountDB::lengthSavingAccountDB() { // ADB ������ ���� �� ��ȯ
	return DB.size();
}

void SavingAccountDB::sortSavingAccount() { // �������� ����
	sort(DB.begin(), DB.end(), compareFunction);
}

int SavingAccountDB::searchSavingAccount(int start_index, int end_index, int accID) { // ADB ���� ���� �Է¹��� accID�� ��ġ�ϴ� ������ �ε��� ���� ��ȯ�Ѵ�.
	int middle = (start_index + end_index) / 2;							  // ��ġ�ϴ� ���Ұ� �������� �ʴ� ��� -1�� ��ȯ�Ѵ�.
	if (end_index - start_index == 1) {
		if (DB[start_index].GetAccID() == accID) {
			return start_index;
		}
		else if (DB[end_index].GetAccID() == accID) {
			return end_index;
		}
		else {
			return -1;
		}
	}
	if (end_index == start_index) {
		if (DB[start_index].GetAccID() == accID) {
			return start_index;
		}
		else {
			return -1;
		}
	}
	if (DB[middle].GetAccID() == accID) {
		return middle;
	}
	else if (DB[middle].GetAccID() > accID) {
		return searchSavingAccount(start_index, middle, accID);
	}
	else {
		return searchSavingAccount(middle, end_index, accID);
	}
}
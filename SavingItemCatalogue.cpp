#include"SavingItemCatalogue.h"

using namespace std;

SavingItemCatalogue::SavingItemCatalogue(){
	Item.push_back(SavingItem(3, 200000, 12));
	Item.push_back(SavingItem(6, 100000, 24));
	Item.push_back(SavingItem(2, 150000, 6));
}
void SavingItemCatalogue::setSavingItemCatalogue(){
	double Rate;
	int savingMoneyRate;
	int savingDate;
	
	cout << "�������� �Է� : ";
	cin >> Rate;
	cout << "�ִ� ���� ���� �ݾ� �Է� : ";
	cin >> savingMoneyRate;
	cout << "���� �Ⱓ : ";
	cin >> savingDate;

	Item.push_back(SavingItem(Rate, savingMoneyRate, savingDate));
}


void SavingItemCatalogue::changeSavingItemCatalogue() {
	int idx;
	double Rate;
	int savingMoneyRate;
	int savingDate;

	while (true) {
		cout << "������ ���� ��ǰ�� ��ȣ�� �Է��ϼ��� : ";
		cin >> idx;
		if ((idx >= 0) && (idx < Item.size())) {
			break;
		}
		else {
			cout << "�������� �ʴ� ��ǰ��ȣ�Դϴ�." << endl;
		}
	}
	cout << "�������� �Է� : ";
	cin >> Rate;
	cout << "�ִ� ���� ���� �ݾ� �Է� : ";
	cin >> savingMoneyRate;
	cout << "���� �Ⱓ : ";
	cin >> savingDate;

	Item[idx - 1] = SavingItem(Rate, savingMoneyRate, savingDate);
}

double SavingItemCatalogue::getSavingItemRate(int number) {
	return Item[number].getRate();
}

int SavingItemCatalogue::getSavingItemMoneyRate(int number) {
	return Item[number].getMoneyRate();
}

int SavingItemCatalogue::getSavingItemDate(int number) {
	return Item[number].getDate();
}


void SavingItemCatalogue::getAllSavingItemCatalogue() {

	cout << "��ü ���� ��ǰ ���" << endl;
	for (int i = 0; i < Item.size(); i++) {
		Item[i].getSavingItemInfo(i);
	}
}
void SavingItemCatalogue::getSavingItemCatalogue(){
	int CatalogueNumber;
	cout << "��ȸ�ϰ� ���� ���ݻ�ǰ�� ��ȣ�� �Է� : ";
	cin >> CatalogueNumber;

	Item[CatalogueNumber].getSavingItemInfo(CatalogueNumber);
}
void SavingItemCatalogue::choiceSavingItemCatalogue(int idx) {
	Item[idx].getSavingItemInfo(idx);
}
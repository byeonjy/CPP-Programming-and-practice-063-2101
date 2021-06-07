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
	
	cout << "연이자율 입력 : ";
	cin >> Rate;
	cout << "최대 적금 가능 금액 입력 : ";
	cin >> savingMoneyRate;
	cout << "적금 기간 : ";
	cin >> savingDate;

	Item.push_back(SavingItem(Rate, savingMoneyRate, savingDate));
}


void SavingItemCatalogue::changeSavingItemCatalogue() {
	int idx;
	double Rate;
	int savingMoneyRate;
	int savingDate;

	while (true) {
		cout << "변경할 적금 상품의 번호를 입력하세요 : ";
		cin >> idx;
		if ((idx >= 0) && (idx < Item.size())) {
			break;
		}
		else {
			cout << "존재하지 않는 상품번호입니다." << endl;
		}
	}
	cout << "연이자율 입력 : ";
	cin >> Rate;
	cout << "최대 적금 가능 금액 입력 : ";
	cin >> savingMoneyRate;
	cout << "적금 기간 : ";
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

	cout << "전체 적금 상품 목록" << endl;
	for (int i = 0; i < Item.size(); i++) {
		Item[i].getSavingItemInfo(i);
	}
}
void SavingItemCatalogue::getSavingItemCatalogue(){
	int CatalogueNumber;
	cout << "조회하고 싶은 적금상품의 번호를 입력 : ";
	cin >> CatalogueNumber;

	Item[CatalogueNumber].getSavingItemInfo(CatalogueNumber);
}
void SavingItemCatalogue::choiceSavingItemCatalogue(int idx) {
	Item[idx].getSavingItemInfo(idx);
}
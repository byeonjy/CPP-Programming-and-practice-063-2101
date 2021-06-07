#include "SavingItem.h"
using namespace std;


SavingItem::SavingItem(double a,int b,int c) {
	Rate = a;
	savingMoneyRate = b;
	savingDate = c;
}
void SavingItem::setRate(double Rate){
	this->Rate = Rate;
}
void SavingItem::setMoneyRate(int savingMoneyRate){
	this->savingMoneyRate = savingMoneyRate;
}
void SavingItem::setDate(int savingDate){
	this->savingDate = savingDate;
}
double SavingItem::getRate(){
	return Rate;
}
int SavingItem::getMoneyRate(){
	return savingMoneyRate;
}
int	SavingItem::getDate(){
	return savingDate;
}

void SavingItem::getSavingItemInfo(int CatalogueNumber) {
	cout << "======================" << endl;
	cout << CatalogueNumber + 1 << "번 적금 상품 정보" << endl;
	cout << "만기시 연 이자 율 : " << Rate << " %" << endl;
	cout << "최대 적금 가능 금액 : " << savingMoneyRate << " 원" << endl;
	cout << "납입 기간 : " << savingDate << " 개월" << endl;
	cout << "======================" << endl;
}

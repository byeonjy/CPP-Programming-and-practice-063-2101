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
	cout << CatalogueNumber + 1 << "�� ���� ��ǰ ����" << endl;
	cout << "����� �� ���� �� : " << Rate << " %" << endl;
	cout << "�ִ� ���� ���� �ݾ� : " << savingMoneyRate << " ��" << endl;
	cout << "���� �Ⱓ : " << savingDate << " ����" << endl;
	cout << "======================" << endl;
}

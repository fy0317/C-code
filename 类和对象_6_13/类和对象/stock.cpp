#include"stock.h"

void Stock::acquire(const string& co, long n, double pr) {
	company = co;
	if (n < 0) {
		cout << "��Ʊ����Ŀ����Ϊ��������Ϊ0" << endl;
		shares = 0;
	}
	else shares = n;
	share_val = pr;
	set_tot();
}

void Stock::buy(long num, double price){
	if (num < 0) {
		cout << "��Ʊ����Ŀ����Ϊ����" << endl;
	}
	else {
		shares += num;
		share_val = price;
		set_tot();
	}
}
void Stock::sell(long num, double price) {
	if (num < 0)
		cout << "��Ʊ����Ŀ����Ϊ����" << endl;
	else if (num > shares)
		cout << "�������Ĺ�Ʊ���ܱ���ӵ�еĻ���" << endl;
	else {
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(long price) {
	share_val = price;
	set_tot();
}
void Stock::show() {
	cout << "Company��" << company
		<< " Shares��" << shares << endl
		<< " Share Price��" << share_val
		<< " Total Worth��" << total_val << endl;
}
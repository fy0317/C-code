#include"stock.h"
void test1(){
	Stock stock1("����", 12, 20.0);
	stock1.show();
	Stock stock2("��Ѷ", 2, 2.0);
	stock2.show();
	cout << "---------------------------" << endl;
	stock1 = stock2;
	stock1.show();
	stock2.show();
	stock1 = Stock("�ٶ�", 10, 50);
	cout << "---------------------------" << endl;
	stock1.show();
}

void test2() {
	const int SIZE = 4;
	Stock stocks[SIZE] = {
		{"��Ѷ", 10, 30},
		{"����", 2, 28},
		{"�ֽ�", 8, 21},
		{"�ٶ�", 10, 20}
	};
	cout << "ӵ�й�Ʊ��\n";
	int i;
	for (i = 0; i < SIZE; i++) {
		stocks[i].show();
	}
	const Stock* top = &(stocks[0]);
	for (i = 1; i < SIZE; i++) {
		top = &(top->topval(stocks[i]));
	}
	cout << "���ֵ:\n";
	top->show();
}
int main(){
	//test1();
	test2();
	return 0;
}


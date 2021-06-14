#include"stock.h"
void test1(){
	Stock stock1("阿里", 12, 20.0);
	stock1.show();
	Stock stock2("腾讯", 2, 2.0);
	stock2.show();
	cout << "---------------------------" << endl;
	stock1 = stock2;
	stock1.show();
	stock2.show();
	stock1 = Stock("百度", 10, 50);
	cout << "---------------------------" << endl;
	stock1.show();
}

void test2() {
	const int SIZE = 4;
	Stock stocks[SIZE] = {
		{"腾讯", 10, 30},
		{"阿里", 2, 28},
		{"字节", 8, 21},
		{"百度", 10, 20}
	};
	cout << "拥有股票：\n";
	int i;
	for (i = 0; i < SIZE; i++) {
		stocks[i].show();
	}
	const Stock* top = &(stocks[0]);
	for (i = 1; i < SIZE; i++) {
		top = &(top->topval(stocks[i]));
	}
	cout << "最大值:\n";
	top->show();
}
int main(){
	//test1();
	test2();
	return 0;
}


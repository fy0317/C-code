#include"stock.h"
Stock::Stock()
{
	cout << "无参构造函数\n";
	company = "no name";
	shares = 0;
	share_val = 0;
	total_val = 0;
}

Stock::Stock(const string& co, long n, double pr)
{
	company = co;
	shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	cout << company << "的析构函数\n";
}

void Stock::buy(long num, double price)
{
	if (num < 0) {
		cout << "输入有误\n";
		return;
	}
	shares += num;
	share_val = price;
	set_tot();
}
void Stock::sell(long num, double price)
{
	if (num < 0 || num > shares) {
		cout << "错误\n";
		return;
	}
	else {
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(double price) {
	share_val = price;
	set_tot();
}
void Stock::show() const {
	cout << "公司：" << company
		<< " 股票数：" << shares << endl
		<< " 每股的价格：" << share_val
		<< " 总价：" << total_val << endl;
}

const Stock& Stock::topval(const Stock& s)const{
	if (s.total_val > total_val)
		return s;
	else return *this;
}

#include"stock.h"
Stock::Stock()
{
	cout << "�޲ι��캯��\n";
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
	cout << company << "����������\n";
}

void Stock::buy(long num, double price)
{
	if (num < 0) {
		cout << "��������\n";
		return;
	}
	shares += num;
	share_val = price;
	set_tot();
}
void Stock::sell(long num, double price)
{
	if (num < 0 || num > shares) {
		cout << "����\n";
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
	cout << "��˾��" << company
		<< " ��Ʊ����" << shares << endl
		<< " ÿ�ɵļ۸�" << share_val
		<< " �ܼۣ�" << total_val << endl;
}

const Stock& Stock::topval(const Stock& s)const{
	if (s.total_val > total_val)
		return s;
	else return *this;
}

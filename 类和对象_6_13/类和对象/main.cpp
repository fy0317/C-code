#include"stock.h"

int main()
{
	Stock s;
	s.acquire("��Ѷ", 100, 153);
	s.show();
	Stock s1;
	s1 = s;		//ǳ����
	s.show();
	return 0;
}
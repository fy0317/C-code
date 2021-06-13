#include"stock.h"

int main()
{
	Stock s;
	s.acquire("ÌÚÑ¶", 100, 153);
	s.show();
	Stock s1;
	s1 = s;		//Ç³¿½±´
	s.show();
	return 0;
}
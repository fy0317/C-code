#include"mylist.h"
#include<iostream>

namespace fy {
	using std::cout;
	using std::endl;
	void test_list1() {
		list<int> l;
		l.push_back(1);
		l.push_back(2);
		l.push_back(3);
		l.push_back(4);
		l.push_back(5);
		for (auto e : l) {
			cout << e << " ";
		}
		cout << endl;
		list<int>l2(l);
		for (auto x : l2) {
			cout << x << ' ';
		}
		cout << endl;
		list<int>l3;
		l3 = l2;
		for (auto x : l3) {
			cout << x << " ";
		}
	}
}

int main() {
	fy::test_list1();
	return 0;
}
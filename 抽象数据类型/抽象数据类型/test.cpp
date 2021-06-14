#include"stack.h"
int main() {
	Stack st;
	char ch;
	unsigned long po;
	cout << "输入A入栈，输入P出栈，输入Q推出\n";
	while (cin >> ch && toupper(ch) != 'Q') {
		while (cin.get() != '\n')
			;
		if (!isalpha(ch)) {
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':
			cout << "输入一个数\n";
			cin >> po;
			if (st.isfull())
				cout << "栈已经满了\n";
			else st.push(po);
			break;
		case 'p':
		case 'P':
			if (st.isempty())
				cout << "空栈\n";
			else {
				st.pop(po);
				cout << "PO #" << po << "popped\n";
			}
			break;
		}
		cout << "输入A入栈，输入P出栈，输入Q推出\n";
	}
	cout << "Bye\n";
	return 0;
}
#include"stack.h"
int main() {
	Stack st;
	char ch;
	unsigned long po;
	cout << "����A��ջ������P��ջ������Q�Ƴ�\n";
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
			cout << "����һ����\n";
			cin >> po;
			if (st.isfull())
				cout << "ջ�Ѿ�����\n";
			else st.push(po);
			break;
		case 'p':
		case 'P':
			if (st.isempty())
				cout << "��ջ\n";
			else {
				st.pop(po);
				cout << "PO #" << po << "popped\n";
			}
			break;
		}
		cout << "����A��ջ������P��ջ������Q�Ƴ�\n";
	}
	cout << "Bye\n";
	return 0;
}
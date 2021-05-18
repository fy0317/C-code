#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//�����������
class Cube
{
private:
	int m_l;		//��
	int m_w;		//��
	int m_h;		//��
public:
	//���ó�
	void setL(int L)
	{
		m_l = L;
	}
	//��ȡ��
	int getL()
	{
		return m_l;
	}

	//���ÿ�
	void setW(int W)
	{
		m_w = W;
	}
	//��ȡ��
	int getw()
	{
		return m_w;
	}
	//���ø�
	void setH(int H)
	{
		m_h = H;
	}
	//��ȡ��
	int getH()
	{
		return m_h;
	}

	//��ȡ���
	int getV()
	{
		return m_l * m_w * m_h;
	}
	//��ȡ���
	int getS()
	{
		return 2 * (m_l * m_w + m_l * m_h + m_w * m_h);
	}

	//���ó�Ա�����ж������������Ƿ����
	bool isSameByClass(Cube& c1)
	{
		if (c1.getL() == m_l && c1.getH() == m_h && c1.getw() == m_w)
			return true;
		return false;
	}
};


//����ȫ�ֺ����ж������������Ƿ����
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getw() == c2.getw())
		return true;
	return false;
}

//int main()
//{
//	Cube c1;
//	c1.setL(1);
//	c1.setW(2);
//	c1.setH(3);
//	Cube c2;
//	c2.setL(1);
//	c2.setW(2);
//	c2.setH(3);
//	bool ret = isSame(c1, c2);
//	if (ret == true)
//		cout << "���\n";
//	else cout << "�����\n";
//	ret = c1.isSameByClass(c2);
//	if (ret == true)
//		cout << "���\n";
//	else cout << "�����\n";
//	//cout << "C1�����Ϊ��" << c1.getS() << " C1�����Ϊ��" << c1.getV() << endl;
//	return 0;
//}

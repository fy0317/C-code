#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#define MAX 1000
using namespace std;

//ͨѶ¼��Ա��Ϣ
struct Person		
{
	string name;	//����
	int sex;	//1�� 2Ů
	unsigned age;	//����
	string tel;		//�绰
	string home;	//סַ
};

//ͨѶ¼
struct Addressbooks
{
	struct Person personArray[MAX];		//ͨѶ¼��Ա����
	int m_size;		//��ǰͨѶ¼��С
};

void AddPerson(Addressbooks* add);		//�����Ϣ
void PrintAddBook(const Addressbooks* add);	//��ӡͨѶ¼
void DeleteAddBook(Addressbooks* add);		//ɾ����ϵ��
void Find(const Addressbooks* add);			//������ϵ��
void Change(Addressbooks* add);				//�޸���ϵ��
void Clear(Addressbooks* add);				//���ͨѶ¼

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class CPU
{
public:
	virtual void calculate() = 0;
};

class VideoCard
{
public:
	virtual void display() = 0;
};

class Memory
{
public:
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	~Computer()
	{
		if (m_cpu)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;		
	VideoCard* m_vc;
	Memory* m_mem;
};

//Intel厂商
class IntelCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Intel的CPU开始计算了\n";
	}
};

class IntelVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Intel的显卡开始显示了\n";
	}
};

class IntelMem :public Memory
{
public:
	void storage()
	{
		cout << "Intel的内存条开始存储了\n";
	}
};

//Lenovo厂商
class LenovoCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Lenovo的CPU开始计算了\n";
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Lenovo的显卡开始显示了\n";
	}
};

class LenovoMem :public Memory
{
public:
	void storage()
	{
		cout << "Lenovo的内存条开始存储了\n";
	}
};

void test1()
{

	cout << "第一台电脑\n";
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMem;

	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
	computer1->work();
	delete computer1;


	cout << "-----------------------------\n";
	cout << "第二台电脑\n";
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMem);
	computer2->work();
	delete computer2;

	
}
int main()
{
	test1();
	return 0;
}


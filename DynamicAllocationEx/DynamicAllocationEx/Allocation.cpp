#include<iostream>
#include<crtdbg.h>

#ifndef _DEBUG
#define new new(_CLIENT_BLOCK,_FILE_,_LINE)
#endif

using namespace std;

class Test{
public:
	char* str;
	Test();
	void value(char*);
};

Test::Test()
{

}
void Test::value(char* t)
{
	this->str = t;
}

//Ŭ���� ������ �ѹ� ����.
class Test2 {
public:
	int *num;
	int *num2;
public:
	Test2();
	~Test2();
};

Test2::Test2()
{
	cout <<"����� ������" << endl;
	num = new int;
	*num =1;
	cout <<*num << endl;

	//�̹��� �迭
	num2 = new int[4];
	num2[0] =1;
	num2[1] =2;
	num2[2] =3;
	num2[3] =4;
	for(int i=0; i<4;i++)
	{
		cout << num2[i] << endl;
	}

}
Test2::~Test2()
{
	cout <<"����� �Ҹ���" << endl;
	delete num;
	delete[] num2;
}

void main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);

	//���� �Ҵ� �׽�Ʈ 1 : �̷��� �ϸ� ����, ����� ����, ������ ù ��° �޸𸮸� ���� �ǹǷ� �޸� ���� 
	/*
	Test *t1 = new Test();
	t1[0].str ="A";
	t1[1].str ="B";
	t1[2].str ="C";
	delete t1;
	
	Test *t2 = new Test;
	t2[0].str ="A";
	t2[1].str ="B";
	t2[2].str ="C";
	delete t2;
	*/
	////////////////////////////////
	//�����Ҵ� 2: ���� �������� 
	/*
	Test *t3 = new Test();
	t3[0].str ="A";
	delete[] t3;
	*/

	//�̰� �Ѱ��ϱ� t4�� �迭�� ���� �ȵ� ������, �迭�� �ȴٸ� t4[0]�̶� �ٸ� �� ���� 
	/*
	Test *t4 = new Test;
	t4[0].str ="A";
	delete t4;
	*/

	//���� ������ ���� ����� ������ ��. : �迭�� ���� ������ 1���� �� �迭�� ���� �ؾ� �� , �迭 ����� ÷�� �� ����� �Ѵ�
	//�迭 ÷�� ���� ���� �ϰ� �迭 ���� �ϸ� �޸� ���� ������ �� 
	/*
	Test *t5 = new Test[2];
	t5[0].str = "B";
	delete[] t5;
	*/

	///////////////�����Ҵ��� 
	//1. �Ϲ� ������ �� �޸𸮿� ���� �ʹ�. 
	int *number = new int;
	*number = 1;
	cout <<*number << endl;
	delete number;

	//2.�迭�� ũ�⸦ �� ����� �����ϰ� �ʹ�. 
	int delta = 2;
	int *number2 = new int[delta];
	number2[0] = 1;
	number2[1] = 2;
	cout <<number2[1] << endl;
	delete[] number2;

	//���� �Ҵ� class �� �׽�Ʈ
	Test2 t9;
}
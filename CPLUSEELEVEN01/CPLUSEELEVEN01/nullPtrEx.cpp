#include <iostream>
using namespace std;

/*
�� �����͸� ��Ÿ���� ���� 0 or NULL ��ũ�θ� ����Ͽ���. 
������ �� ������ null���� �ƴ� ���������� �߷��� �Ǿ�����.
*/

void func(int a)
{
	cout << "float - int "<< endl;
}

void func(double *p)
{
	cout << "float -double *" << endl;
}

void main()
{
	func(static_cast<double*>(0));
	func(0);
	func(nullptr);

	//null pointer�� ũ��� 4byte�̴�. 
	cout << sizeof(nullptr) << endl;
	
}
#include<iostream>

using namespace std;

void main()
{
	//lamda. 
	//[] : lamda capture 
	//() : �Լ� �μ� ����
	//{} : �Լ��� ��ü
	//() : �Լ� ȣ��

	[]{cout << "Hello, TechDay!" << endl;}();

	//���ٴ� �Ϲ� �Լ� ó�� �Ķ���͸� ���� �� �� �ִ�. 
	auto func =[](int n){cout << "Number :" << n << endl;};
	func(33);
	func(7777);

	//���ٴ� ��ȯ���� �ѱ� �� �ִµ� , ��ȯ���� ���� ��������� ������ �� �ְ�, �Ϲ������� �߷� �� �� �ִ�. 
	auto func1 = [] {return 3.14;}();
	auto func2 = [] (float f) { return f; };
	auto func3 = [] () -> float{ return 3.14;};

	float f1 = func1;
	float f2 = func2(3.14f);
	float f3 = func3();

	




}
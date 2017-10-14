#include <iostream>
using namespace std;

/*
널 포인터를 나타내기 위해 0 or NULL 매크로를 사용하였다. 
하지만 이 값들은 null값이 아닌 정수형으로 추론이 되어진다.
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

	//null pointer의 크기는 4byte이다. 
	cout << sizeof(nullptr) << endl;
	
}
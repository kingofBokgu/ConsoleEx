#include<iostream>

using namespace std;

void main()
{
	//lamda. 
	//[] : lamda capture 
	//() : 함수 인수 정의
	//{} : 함수의 본체
	//() : 함수 호출

	[]{cout << "Hello, TechDay!" << endl;}();

	//람다는 일반 함수 처럼 파라미터를 정의 할 수 있다. 
	auto func =[](int n){cout << "Number :" << n << endl;};
	func(33);
	func(7777);

	//람다는 반환값을 넘길 수 있는데 , 반환값의 형으 명시적으로 지정알 수 있고, 암묵적으로 추론 할 수 있다. 
	auto func1 = [] {return 3.14;}();
	auto func2 = [] (float f) { return f; };
	auto func3 = [] () -> float{ return 3.14;};

	float f1 = func1;
	float f2 = func2(3.14f);
	float f3 = func3();

	




}
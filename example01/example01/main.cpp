#include<iostream>

using namespace std;

int main()
{
	//auto를 사용한 예제
	auto NPCName = "BugKing";
	cout << NPCName << endl;

	//auto를 사용한 pointer 참조
	int UserMode =4;
	auto* pUserMode = &UserMode;
	cout << "pUserMode : value -" << *pUserMode << ", address : " << pUserMode << endl;

	auto &refUserMode = UserMode;
	refUserMode =5;
	cout << "UserMode : Value - " << UserMode << "| refUserMode  : value - " << refUserMode << endl;

	// 

	return 0;
}
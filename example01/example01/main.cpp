#include<iostream>

using namespace std;

int main()
{
	//auto�� ����� ����
	auto NPCName = "BugKing";
	cout << NPCName << endl;

	//auto�� ����� pointer ����
	int UserMode =4;
	auto* pUserMode = &UserMode;
	cout << "pUserMode : value -" << *pUserMode << ", address : " << pUserMode << endl;

	auto &refUserMode = UserMode;
	refUserMode =5;
	cout << "UserMode : Value - " << UserMode << "| refUserMode  : value - " << refUserMode << endl;

	// 

	return 0;
}
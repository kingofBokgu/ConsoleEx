/*auto :  ������ ���� �Ҷ� ��������� ���� �������� �ʾƵ� �ȴ�.
������, ����, const���� ����� �� �ִ�. 
*/
#include <iostream>
using namespace std;

void main(){
	auto NPCName = "BugKing";
	cout << NPCName << endl;

	auto Number =1;
	cout << Number << endl;

	int UserMode =4;
	auto* pUserMode = &UserMode;

	cout << "pUserMode : value -" << *pUserMode << ", address : "<< pUserMode << endl;

	auto& refUserMode = UserMode;
	refUserMode =5;

	cout<<"UserMode : value -" << UserMode << "| refUserMode : value - "<< refUserMode << endl;





}
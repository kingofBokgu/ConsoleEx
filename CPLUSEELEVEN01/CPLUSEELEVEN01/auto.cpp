/*auto :  변수를 정의 할때 명시적으로 형을 지정하지 않아도 된다.
포인터, 참조, const에도 사용할 수 있다. 
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
#include "User.h"

void main()
{
	//생성 유저들을 한데로 묶을 vector 
	vector<User> users;
	
	//유저 객체 생성
	User user1;
	user1.SetIndex(1);

	User user2;
	user2.SetIndex(2);
	user2.SetDie(true);

	User user3;
	user3.SetIndex(3);
	
	//vector에 user 저장 
	users.push_back(user1);
	users.push_back(user2);
	users.push_back(user3);

	//죽은 유저 찾기
	//lamda를 사용해 함수를 한 문장으로 표현 할 수 있다.
	auto iter = find_if( users.begin(), users.end(), 
		[](User& fUser)->bool{return true == fUser.GetDie();});
	cout <<"find die user index : " << iter->GetIndex() << endl;



	

}
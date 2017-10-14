#include "User.h"

void main()
{
	//���� �������� �ѵ��� ���� vector 
	vector<User> users;
	
	//���� ��ü ����
	User user1;
	user1.SetIndex(1);

	User user2;
	user2.SetIndex(2);
	user2.SetDie(true);

	User user3;
	user3.SetIndex(3);
	
	//vector�� user ���� 
	users.push_back(user1);
	users.push_back(user2);
	users.push_back(user3);

	//���� ���� ã��
	//lamda�� ����� �Լ��� �� �������� ǥ�� �� �� �ִ�.
	auto iter = find_if( users.begin(), users.end(), 
		[](User& fUser)->bool{return true == fUser.GetDie();});
	cout <<"find die user index : " << iter->GetIndex() << endl;



	

}
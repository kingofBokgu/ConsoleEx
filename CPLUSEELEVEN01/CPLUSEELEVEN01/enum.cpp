#include<iostream>
using namespace std;
//enum ��  c++11 ���� unscoped enum , scoped enum���� ������.

//unscoped enum
enum ITEMTYPE : short
{
	WEAPON,
	EQUIPMENT,
	GEM =10,
	DEFENSE,
};

//scoped enum  
//enum class ��ſ� enum struct�� ����ص� �ȴ�.
enum class CHARACTER_CLASS : short
{
	WARRIOR =1,
	MONK,
	FIGHTER,
};

enum struct BATTLE_TYPE : short
{
	DEATH_MATCH =1,
	TEAM,
};


void main()
{
	//unscoped enum �� c++3�� �����ϴ�
	short ItemType = WEAPON;
	//or
	short ItemType1 = ITEMTYPE::EQUIPMENT;
	cout <<"itemType :" << ItemType<<endl; 
	cout <<"itemType1 :" << ItemType1<<endl;

	//scoped enum : unscoped enum���� �������� CHARACTER_CLASS�� ���� �� �� ����.
	CHARACTER_CLASS charClass = CHARACTER_CLASS ::WARRIOR;
	//but , �̷��� �ϸ� ������ ����.
	//short charClassType = FIGHTER;

	//���� ������ ���� ������ �⺻������ int ���� �ȴ�. 

	//unscoped enum�� ������ ���� �Ϲ������� ������ ��ȯ �� �� �վ���.
	//but scoped enum�� ��������� Ÿ��ĳ������ �ؾ� �Ѵ�. 
	int i= static_cast<int>(CHARACTER_CLASS::WARRIOR);



}
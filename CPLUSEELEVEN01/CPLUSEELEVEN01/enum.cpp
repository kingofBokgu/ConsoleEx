#include<iostream>
using namespace std;
//enum 은  c++11 에서 unscoped enum , scoped enum으로 나뉜다.

//unscoped enum
enum ITEMTYPE : short
{
	WEAPON,
	EQUIPMENT,
	GEM =10,
	DEFENSE,
};

//scoped enum  
//enum class 대신에 enum struct를 사용해도 된다.
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
	//unscoped enum 은 c++3과 동일하다
	short ItemType = WEAPON;
	//or
	short ItemType1 = ITEMTYPE::EQUIPMENT;
	cout <<"itemType :" << ItemType<<endl; 
	cout <<"itemType1 :" << ItemType1<<endl;

	//scoped enum : unscoped enum과의 차이점은 CHARACTER_CLASS를 생략 할 수 없다.
	CHARACTER_CLASS charClass = CHARACTER_CLASS ::WARRIOR;
	//but , 이렇게 하면 에러가 난다.
	//short charClassType = FIGHTER;

	//형을 지정해 주지 않으면 기본적으로 int 형이 된다. 

	//unscoped enum은 기존과 같이 암묵적으로 정수로 변환 할 수 잇었다.
	//but scoped enum은 명시적으로 타입캐스팅을 해야 한다. 
	int i= static_cast<int>(CHARACTER_CLASS::WARRIOR);



}
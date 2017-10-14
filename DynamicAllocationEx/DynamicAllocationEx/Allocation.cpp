#include<iostream>
#include<crtdbg.h>

#ifndef _DEBUG
#define new new(_CLIENT_BLOCK,_FILE_,_LINE)
#endif

using namespace std;

class Test{
public:
	char* str;
	Test();
	void value(char*);
};

Test::Test()
{

}
void Test::value(char* t)
{
	this->str = t;
}

//클래스 내에서 한번 보자.
class Test2 {
public:
	int *num;
	int *num2;
public:
	Test2();
	~Test2();
};

Test2::Test2()
{
	cout <<"여기는 생성자" << endl;
	num = new int;
	*num =1;
	cout <<*num << endl;

	//이번엔 배열
	num2 = new int[4];
	num2[0] =1;
	num2[1] =2;
	num2[2] =3;
	num2[3] =4;
	for(int i=0; i<4;i++)
	{
		cout << num2[i] << endl;
	}

}
Test2::~Test2()
{
	cout <<"여기는 소멸자" << endl;
	delete num;
	delete[] num2;
}

void main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);

	//동적 할당 테스트 1 : 이렇게 하면 빌드, 디버그 에러, 마지막 첫 번째 메모리만 헤제 되므로 메모리 누수 
	/*
	Test *t1 = new Test();
	t1[0].str ="A";
	t1[1].str ="B";
	t1[2].str ="C";
	delete t1;
	
	Test *t2 = new Test;
	t2[0].str ="A";
	t2[1].str ="B";
	t2[2].str ="C";
	delete t2;
	*/
	////////////////////////////////
	//동적할당 2: 빌드 에러없음 
	/*
	Test *t3 = new Test();
	t3[0].str ="A";
	delete[] t3;
	*/

	//이건 한개니까 t4가 배열로 선언 안되 있지만, 배열로 된다면 t4[0]이랑 다를 바 없음 
	/*
	Test *t4 = new Test;
	t4[0].str ="A";
	delete t4;
	*/

	//빌드 에러는 없고 디버깅 오류는 남. : 배열로 선언 했으니 1개를 썼어도 배열로 해제 해야 함 , 배열 선언시 첨자 꼭 써줘야 한다
	//배열 첨자 없이 선언 하고 배열 해제 하면 메모리 누수 오류가 남 
	/*
	Test *t5 = new Test[2];
	t5[0].str = "B";
	delete[] t5;
	*/

	///////////////동적할당은 
	//1. 일반 변수를 힙 메모리에 놓고 싶다. 
	int *number = new int;
	*number = 1;
	cout <<*number << endl;
	delete number;

	//2.배열의 크기를 내 맘대로 설정하고 싶다. 
	int delta = 2;
	int *number2 = new int[delta];
	number2[0] = 1;
	number2[1] = 2;
	cout <<number2[1] << endl;
	delete[] number2;

	//동적 할당 class 내 테스트
	Test2 t9;
}
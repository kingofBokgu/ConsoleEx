#include<iostream>
#include<memory>

using namespace std;

class UniqueArray{
public:
	int m_nID;
public:
	UniqueArray();
	~UniqueArray();
};

UniqueArray::UniqueArray()
{
	cout <<"생성자 입니다"<<endl;
}

UniqueArray::~UniqueArray()
{
	cout <<"소멸자 입니다."<<endl;
}
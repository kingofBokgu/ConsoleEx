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
	cout <<"������ �Դϴ�"<<endl;
}

UniqueArray::~UniqueArray()
{
	cout <<"�Ҹ��� �Դϴ�."<<endl;
}
#include<iostream>

using namespace std;


class SLL
{
public:
	SLL *m_nextPoint;
	int m_data;
public:
	SLL();
	~SLL();

	void createNode(int data, SLL *nptr);	
	void InsertNode(SLL *cptr, SLL *noptr,SLL *nptr, int data);
	void deleteNode(SLL *dptr);
	//탐색 함수
	SLL searchNode(SLL head);

};

SLL::SLL()
{
	//초기화
	m_data =0;
	m_nextPoint = nullptr;
}

void SLL::createNode(int data, SLL *nptr)
{
	m_data = data;
	m_nextPoint = nptr;
}

void SLL::InsertNode(SLL *cptr, SLL *noptr ,SLL *nptr, int data)
{
	SLL *tmp;
	tmp = cptr ->m_nextPoint;
	
	cptr->m_nextPoint = noptr;
	noptr->m_nextPoint = nptr;
	m_data = data;

}

SLL SLL::searchNode(SLL head)
{
	SLL newNodes;


	return newNodes;
}

SLL::~SLL()
{

}


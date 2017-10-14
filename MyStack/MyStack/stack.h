#include<iostream>
#include<crtdbg.h>
#include<string>

#ifndef _DEBUG
#define new new(_CLIENT_BLOCK,_FILE,_LINE)
#endif

using namespace std;

//��� ��ü
class Node{

public:
	char  m_data;
	Node *m_next;
public:
	Node();
};

Node::Node()
{
	m_next = nullptr;
	
}

//stack ��ü
class Stack{
public:
	//���� ����� ��ġ
	Node *m_nodePosition;

	//stack�� ���鼭 ����ų ó���� ��
	Node *m_top;
	Node *m_end;
	Node *m_pushBuffer;

	//�Է� ���� ��� ����
	int m_count;
	int m_delCnt;
	int m_nodeNum;

public:
	Stack(int nodeNum);
	~Stack();
	
	//���� �ʱ�ȭ �Լ�
	void InitialStack(void);
	//���� ������ ����
	void Push(Node node);
	//���� ������ ����
	void Pop(void);
	//���� ���
	void DisplayStack(int count);
};

Stack::Stack(int nodeNum)
{
	m_count =0;
	m_delCnt=0;
	m_nodeNum = nodeNum;
	InitialStack();
}

//���� �ʱ�ȭ �Լ�
void Stack::InitialStack(void)
{
	m_top = nullptr;
	m_end = nullptr;
	m_pushBuffer = new Node[m_nodeNum];

	cout <<"Buffer �ʱ�ȭ" <<endl;
}

//���� ������ ����
void Stack::Push(Node node)
{
	m_pushBuffer[m_count] = node;

	//top�� �����°� ������ ��ġ�� �ٲ۴�.
	
	m_top = m_nodePosition;
	DisplayStack(m_count);
	m_count++;
	m_nodePosition = &m_pushBuffer[m_count];
}
	
//���� ������ ����
void Stack::Pop(void)
{
	cout<<"***********Pop ************"<<endl;
	m_delCnt = m_count -1;
	m_top->m_data ='\0';
	for(int i=0; i<m_delCnt;i++)
	{
		cout<<"buffer"<<"[" <<i <<"]" << m_pushBuffer[i].m_data<<endl;
	}
	m_top->m_next = &m_pushBuffer[m_delCnt-1];
	m_count--;
}

//���� ���
void Stack::DisplayStack(int count)
{
	cout<<"buffer"<<"[" <<count <<"]" << m_pushBuffer[count].m_data<<endl;
	

}

Stack::~Stack()
{
	//���� ��� ��� pop�� ���� �ȴ�.
	delete[] m_pushBuffer;
}



	
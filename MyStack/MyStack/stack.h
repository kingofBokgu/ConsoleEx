#include<iostream>
#include<crtdbg.h>
#include<string>

#ifndef _DEBUG
#define new new(_CLIENT_BLOCK,_FILE,_LINE)
#endif

using namespace std;

//노드 객체
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

//stack 객체
class Stack{
public:
	//현재 노드의 위치
	Node *m_nodePosition;

	//stack을 돌면서 가리킬 처음과 끝
	Node *m_top;
	Node *m_end;
	Node *m_pushBuffer;

	//입력 받은 노드 갯수
	int m_count;
	int m_delCnt;
	int m_nodeNum;

public:
	Stack(int nodeNum);
	~Stack();
	
	//스택 초기화 함수
	void InitialStack(void);
	//스택 데이터 삽입
	void Push(Node node);
	//스택 데이터 삭제
	void Pop(void);
	//스택 출력
	void DisplayStack(int count);
};

Stack::Stack(int nodeNum)
{
	m_count =0;
	m_delCnt=0;
	m_nodeNum = nodeNum;
	InitialStack();
}

//스택 초기화 함수
void Stack::InitialStack(void)
{
	m_top = nullptr;
	m_end = nullptr;
	m_pushBuffer = new Node[m_nodeNum];

	cout <<"Buffer 초기화" <<endl;
}

//스택 데이터 삽입
void Stack::Push(Node node)
{
	m_pushBuffer[m_count] = node;

	//top은 들어오는거 순으로 위치를 바꾼다.
	
	m_top = m_nodePosition;
	DisplayStack(m_count);
	m_count++;
	m_nodePosition = &m_pushBuffer[m_count];
}
	
//스택 데이터 삭제
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

//스택 출력
void Stack::DisplayStack(int count)
{
	cout<<"buffer"<<"[" <<count <<"]" << m_pushBuffer[count].m_data<<endl;
	

}

Stack::~Stack()
{
	//예상 대로 라면 pop이 오게 된다.
	delete[] m_pushBuffer;
}



	
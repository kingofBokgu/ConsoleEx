#include<iostream>
#include<string.h>
#include<crtdbg.h>

#ifndef _DEBUG
#define new new (_CLIENT_BLOCK,_FILE,_LINE)
#endif
using namespace std;

class Node{
public:
	char data;
	Node *nextNode;

public:
	Node();
};

Node::Node()
{
	data = '\0';
	nextNode = nullptr;
}

//1. Queue 초기화
//2. Queue Node put
//3. Queue Node Get
//4. Queue의  Front 를 나타내는 변수
//5. Queue의  출구를 나타내는 변수

class Queue{
public:
	Node m_front;
	Node m_rear;
	//Node들이 들어 올 버퍼
	Node *m_qBuffer;
	int m_count;
	int m_delCnt;
	int m_totalCnt;
public:
	Queue(int number);
	~Queue();
	void Init(int nodeNum);
	void Put(Node node);
	void Get();
};

Queue::Queue(int number)
{
	Init(number);
}

void Queue::Init(int nodeNum)
{
	m_front.data ='\0';
	m_rear.data ='N';

	m_front.nextNode = &m_rear;
	m_rear.nextNode  = &m_rear;
	m_qBuffer = new Node[nodeNum];
	
	m_count = 0;
	m_delCnt =0;
	m_totalCnt=0;

	cout <<"front NextNode :" << m_front.nextNode<<endl;
	cout <<"m_rear NextNode:" << m_front.nextNode<<endl;
	
}
	
void Queue::Put(Node node)
{
	//노드들을 버퍼에 넣고, front와 rear로 위치를 지정해준다.
	cout <<m_count<<"노드"<<endl;
	m_qBuffer[m_count] = node;
	if(m_count ==0)
	{
		m_front.nextNode = &m_qBuffer[m_count];
		m_rear.nextNode  = &m_qBuffer[m_count]; 
		m_qBuffer[m_count].nextNode = &m_rear;
	}else{
		cout<<"count :" <<m_count<<endl;
		
		m_rear.nextNode = &m_qBuffer[m_count];
		m_qBuffer[m_count].nextNode = &m_rear;
		m_rear.nextNode->nextNode = &m_qBuffer[m_count-1];
	}

	cout<<"m_rear.nextNode->data :" << m_rear.nextNode->data<<endl;
	cout<<"m_rear.nextNode->nextNode->data :" << m_rear.nextNode->nextNode->data<<endl;
	
	m_count++;

}

void Queue::Get()
{
	//버퍼에서 나갈 노드를 지정하고 front와 rear의 위치를 바꾼다. 
	//처음 들어온 노드가 나간다. front로 서치
	cout <<"m_delCnt : "<< m_delCnt<<endl;
	m_front.nextNode->data ='\0';
	m_front.nextNode =nullptr;

	m_front.nextNode = &m_qBuffer[m_delCnt+1];
	cout<<"m_front.nextNode: "<< m_front.nextNode->data<<endl;
	
	for(int i=m_delCnt; i<m_count;i++)
	{
		cout <<"m_qBuffer["<<i<<"]:"<<m_qBuffer[i].data<<endl;
	}
	cout<<endl;

	m_delCnt++;
}

Queue::~Queue()
{
	delete[] m_qBuffer;
}
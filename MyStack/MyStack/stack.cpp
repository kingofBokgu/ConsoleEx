#include"stack.h"

void main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);
	//노드를 생성해서
	//stack 객체에 대입 하자.
	//1. 노드 생성
	int nodeNum;
	cout <<"몇개의 노드를 생성할것인가? ";
	cin >> nodeNum;
	Node *nodes = new Node[nodeNum];
	for(int i=0;i<nodeNum;i++)
	{
		unsigned char data = 'A'+i;
		nodes[i].m_data = data;
	}

	Stack stack1(nodeNum);
	stack1.Push(nodes[0]);
	stack1.Push(nodes[1]);
	stack1.Push(nodes[2]);
	stack1.Push(nodes[3]);
	stack1.Push(nodes[4]);
	
	stack1.Pop();
	stack1.Pop();
	stack1.Pop();
	stack1.Pop();

	delete[] nodes;
	
}
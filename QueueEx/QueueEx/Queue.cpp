#include"Queue.h"

void main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);

	int nodeNum;
	cout<<"Queue안의 노드 갯수 생성"<<endl;
	cin >> nodeNum;
	Queue queue(nodeNum);

	Node *nodes = new Node[nodeNum];
	for(int i=0;i<nodeNum; i++)
	{
		nodes[i].data ='A'+i;
	}

	queue.Put(nodes[0]);
	queue.Put(nodes[1]);
	queue.Put(nodes[2]);
	queue.Put(nodes[3]);

	queue.Get();
	queue.Get();
	queue.Get();

	delete [] nodes;
}
#include "DoubleLinked.h"

void main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);

	//1.ù��° ���� ����
	//��� ������ �Է� �޾� �����Ҵ����� ��带 ������
	cout<<"��� ��带 ���� ���ΰ�?"<<endl;
	//��� ����
	int nodeNum =0;
	cin >> nodeNum;

	Node *nodes = new Node[nodeNum];
	//2. �� ��忡 ���� ���� 
	//srand((unsigned int)time(NULL));
	for(int i=0;i<nodeNum;i++)
	{
		//����
		//unsigned char data = rand()%24 + 65;
		unsigned char data = 'A'+i;
		nodes[i].SetData(data);
		cout<<"node data : "<< nodes[i].GetData()<<endl;
	}

	//�� ��� �ּҰ� ����غ���
	cout <<"========= node address ========="<<endl;
	for(int i=0; i<nodeNum;i++)
	{
		cout <<&nodes[i]<<endl;
	}

	//��� ������ data�� ������ ������ ���
	cout<<"========== head node, tail node =========="<<endl;
	Node temp;
	for(int i=0;i<nodeNum-1;i++)
	{
		if(nodes[i].GetData()> nodes[i+1].GetData())
		{
			temp = nodes[i];
			nodes[i]= nodes[i+1];
			nodes[i+1]=temp;
		}

	}
	for(int i=0; i<nodeNum;i++)
	{
		cout << nodes[i].GetData();
	}
	cout <<endl;
	//�ǻ� ���� ������ �ǹ̰� ����.

	//�ٽ� ��� ���� 
	for(int i=0; i<nodeNum-1;i++)
	{
		if(i==0)
		{
			nodes[i].SetPoint(nullptr,&nodes[i+1]);
		}else{
			nodes[i].SetPoint(&nodes[i-1],&nodes[i+1]);
		}

	}

	
	//��� �߰� ���� 
	Node insertNode;



	delete []nodes;

	
}
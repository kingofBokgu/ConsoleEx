#include "DoubleLinked.h"

void main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);

	//1.첫번째 노드들 생성
	//노드 개수를 입력 받아 동적할당으로 노드를 만들자
	cout<<"몇개의 노드를 만들 것인가?"<<endl;
	//노드 갯수
	int nodeNum =0;
	cin >> nodeNum;

	Node *nodes = new Node[nodeNum];
	//2. 각 노드에 값을 대입 
	//srand((unsigned int)time(NULL));
	for(int i=0;i<nodeNum;i++)
	{
		//랜덤
		//unsigned char data = rand()%24 + 65;
		unsigned char data = 'A'+i;
		nodes[i].SetData(data);
		cout<<"node data : "<< nodes[i].GetData()<<endl;
	}

	//각 노드 주소값 출력해보기
	cout <<"========= node address ========="<<endl;
	for(int i=0; i<nodeNum;i++)
	{
		cout <<&nodes[i]<<endl;
	}

	//노드 생성된 data들 순으로 정렬후 출력
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
	//실상 위의 정렬은 의미가 없다.

	//다시 노드 연결 
	for(int i=0; i<nodeNum-1;i++)
	{
		if(i==0)
		{
			nodes[i].SetPoint(nullptr,&nodes[i+1]);
		}else{
			nodes[i].SetPoint(&nodes[i-1],&nodes[i+1]);
		}

	}

	
	//노드 중간 삽입 
	Node insertNode;



	delete []nodes;

	
}
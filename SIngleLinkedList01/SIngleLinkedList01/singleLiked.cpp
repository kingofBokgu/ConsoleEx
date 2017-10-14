#include "singleLinked.h"

void main()
{
	//노드 생성
	Node head, tail,dno1,dno2,dno3;
	int count =0;

	head.SetNodeInfo(&head,"");
	tail.SetNodeInfo(&tail,"");
	dno1.SetNodeInfo(&dno1,"A");
	dno2.SetNodeInfo(&dno2,"B");
	dno3.SetNodeInfo(&dno3,"C");

	cout <<"==========================="<<endl;
	cout <<"head : " << head.GetNodePtr() << endl;
	cout <<"tail : " << tail.GetNodePtr() << endl;

	//노트 연결
	head.m_nextPtr = dno1.GetNodePtr();
	dno1.m_nextPtr = dno2.GetNodePtr();
	dno2.m_nextPtr = dno3.GetNodePtr();
	dno3.m_nextPtr = tail.GetNodePtr();

	cout <<"============================"<<endl;
	cout <<"head next data : "<< head.m_nextPtr->GetData() << endl;
	cout <<"dno1 next data : "<< dno1.m_nextPtr->GetData() << endl;
	cout <<"dno2 next data : "<< dno2.m_nextPtr->GetData() << endl;
	cout <<"dno3 next data : "<< dno3.m_nextPtr->GetData() << endl;

	//노드 중간 삽입
	cout <<"============================="<<endl;
	Node insertNode;
	insertNode.SetNodeInfo(&insertNode,"B'");
	cout <<"insertNode : "<< insertNode.GetNodePtr()<< endl;
	dno1.m_nextPtr = insertNode.GetNodePtr();
	insertNode.m_nextPtr = dno2.GetNodePtr();

	//노드 삭제는 환형 링크드에서 유용하겠다
	//인위로 값을 지우고 싶은데.. 지금은 불필요. 

	//노드 탐색
	cout <<"============================"<<endl;
	Node tSearch;
	Node *tSearch1;
	tSearch = head;
	//head에서 tail까지 총 노드가 몇개이며, 각 노드 데이터는?
	if(tSearch.GetNodePtr()->m_nextPtr == nullptr)
	{
		cout <<"tail" << endl;
	}else{
		tSearch1 = tSearch.m_nextPtr;
		count += 1;
		
		cout <<"count :" << count <<" : ";
		cout <<tSearch1->GetData() << endl;
		while(tSearch1->m_nextPtr != nullptr)
		{
			count ++;
			tSearch1 = tSearch1->m_nextPtr;
			cout <<"count :" <<count <<" : ";
			cout << tSearch1->GetData()<< endl;
		}
	}


}
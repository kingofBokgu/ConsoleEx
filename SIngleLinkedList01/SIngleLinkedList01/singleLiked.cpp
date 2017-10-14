#include "singleLinked.h"

void main()
{
	//��� ����
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

	//��Ʈ ����
	head.m_nextPtr = dno1.GetNodePtr();
	dno1.m_nextPtr = dno2.GetNodePtr();
	dno2.m_nextPtr = dno3.GetNodePtr();
	dno3.m_nextPtr = tail.GetNodePtr();

	cout <<"============================"<<endl;
	cout <<"head next data : "<< head.m_nextPtr->GetData() << endl;
	cout <<"dno1 next data : "<< dno1.m_nextPtr->GetData() << endl;
	cout <<"dno2 next data : "<< dno2.m_nextPtr->GetData() << endl;
	cout <<"dno3 next data : "<< dno3.m_nextPtr->GetData() << endl;

	//��� �߰� ����
	cout <<"============================="<<endl;
	Node insertNode;
	insertNode.SetNodeInfo(&insertNode,"B'");
	cout <<"insertNode : "<< insertNode.GetNodePtr()<< endl;
	dno1.m_nextPtr = insertNode.GetNodePtr();
	insertNode.m_nextPtr = dno2.GetNodePtr();

	//��� ������ ȯ�� ��ũ�忡�� �����ϰڴ�
	//������ ���� ����� ������.. ������ ���ʿ�. 

	//��� Ž��
	cout <<"============================"<<endl;
	Node tSearch;
	Node *tSearch1;
	tSearch = head;
	//head���� tail���� �� ��尡 ��̸�, �� ��� �����ʹ�?
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
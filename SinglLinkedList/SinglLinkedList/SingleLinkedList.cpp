#include"SingleLinked.h"

void main()
{
	SLL head;
	SLL tail;
	SLL node1,node2,node3;
	
	cout <<"head address : "<< &head <<endl;
	cout <<"end address :  "<< &tail <<endl;
	cout <<"node1 address :"<< &node1 <<endl;
	cout <<"node2 address :"<< &node2 <<endl;
	cout <<"node3 address :"<< &node3<<endl;

	head.m_nextPoint = &node1;

	node1.createNode(1,&node2);
	node2.createNode(2,&node3);
	node3.createNode(3,&tail);

	cout <<"================single LinkedList====================="<<endl;
	cout <<"node1 address :"<< node1.m_nextPoint <<endl;
	cout <<"node2 address :"<< node2.m_nextPoint <<endl;
	cout <<"node3 address :"<< node3.m_nextPoint<<endl;

	cout<<"============search ========================"<<endl;
	

	cout <<"================Insert====================="<<endl;
	SLL inode;
	inode.InsertNode(&node1,&inode,&node2,22);
	cout <<"node1 address :"<< (head.m_nextPoint +1)<<endl;
	cout <<"node2 address :"<< head.m_nextPoint->m_nextPoint->m_data <<endl;
	cout <<"node3 address :"<< head.m_nextPoint->m_nextPoint->m_nextPoint->m_data<<endl;
	cout <<"node3 address :"<< head.m_nextPoint->m_nextPoint->m_nextPoint->m_nextPoint->m_data<<endl;
	cout <<"================delete====================="<<endl;
	SLL *test = head.m_nextPoint;
	cout <<"address :" << (test+4)->m_data << endl;





	




}
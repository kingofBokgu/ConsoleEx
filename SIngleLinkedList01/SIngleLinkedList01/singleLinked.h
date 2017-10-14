#include<iostream>

using namespace std;

class Node
{
private:
	Node *m_nodePtr;
	char *m_data;
public:
	Node();
	~Node();

	Node *m_nextPtr;
	Node* GetNodePtr();
	char* GetData();

	void SetNodeInfo(Node *ptr, char *data);
};

Node::Node()
{
	m_nextPtr = nullptr;
	m_nodePtr = nullptr;
	m_data    = " "; 

}
Node::~Node()
{

}
Node* Node::GetNodePtr()
{
	return m_nodePtr;
}

char* Node::GetData()
{
	if(m_data == "")
	{
		return "no data";
	}else{
		return m_data;
	}
	
}

void Node::SetNodeInfo(Node *ptr, char *data)
{
	m_nodePtr = ptr;
	m_data = data;
}


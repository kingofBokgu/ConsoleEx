#include<iostream>
#include<crtdbg.h>
#include<string>
#include<cstdlib>
#include<ctime>

#ifndef _DEBUG
#define new new(_CLIENT_BLOCK,_FILE_,_LINE)
#endif
using namespace std;

class Node
{
private:
	Node *m_prePoint;
	Node *m_nextPoint;
	char m_data;
public:
	Node();
	void SetPoint(Node *pp, Node *np);
	void SetData(char d);
	Node *GetPrePosition();
	Node *GetNextPosition();
	char GetData();
};

Node::Node()
{
	m_prePoint = nullptr;
	m_nextPoint = nullptr;
	
}
void Node::SetPoint(Node *pp, Node *np)
{
	m_prePoint = pp;
	m_nextPoint = np;

}
void Node::SetData(char d)
{
	m_data =d;
}
Node* Node::GetPrePosition()
{
	return m_prePoint;
}

Node* Node::GetNextPosition()
{
	return m_nextPoint;
}
	
char Node::GetData()
{
	return m_data;
}
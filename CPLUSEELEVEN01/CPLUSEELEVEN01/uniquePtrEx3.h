#include<iostream>
#include<memory>

using namespace std;

class Particle{
public:
	int m_nID;
public:
	Particle(int nID);
	~Particle();
};

Particle::Particle(int nID)
{
	m_nID = nID;
	cout<<"Particle class ������ :"<<m_nID<<"�� ����"<<endl;
}

Particle::~Particle()
{
	cout<<"Particle class �Ҹ��� :"<<m_nID<<"�� �Ҹ�"<<endl;
}
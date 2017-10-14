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
	cout<<"Particle class 积己磊 :"<<m_nID<<"锅 积己"<<endl;
}

Particle::~Particle()
{
	cout<<"Particle class 家戈磊 :"<<m_nID<<"锅 家戈"<<endl;
}
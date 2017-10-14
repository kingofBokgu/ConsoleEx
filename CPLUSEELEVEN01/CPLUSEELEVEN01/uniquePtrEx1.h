#include<iostream>
#include<vector>
#include<memory>

using namespace std;

class Particle
{
public:
	int m_nID;
public:
	Particle(int nID)
	{
		m_nID = nID;
		cout <<"Particle"<<m_nID<<"번 생성."<<endl;
	}
	~Particle()
	{
		cout <<"Particle"<<m_nID<<"번 소멸."<<endl;
	}

};
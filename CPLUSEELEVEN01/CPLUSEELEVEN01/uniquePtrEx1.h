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
		cout <<"Particle"<<m_nID<<"�� ����."<<endl;
	}
	~Particle()
	{
		cout <<"Particle"<<m_nID<<"�� �Ҹ�."<<endl;
	}

};
#include<iostream>
#include<memory>

using namespace std;

class Particle
{
public:
	int m_nID;
	shared_ptr<Particle> m_other;

public:
	Particle(int nID)
	{
		m_nID = nID;
		cout <<"Particle" << m_nID<<"번 생성."<<endl;
	}
	~Particle()
	{
	}
};

void main()
{
	shared_ptr<Particle> particlePtr1(new Particle(1));
	{
		shared_ptr<Particle> particlePtr2(new Particle(2));
		particlePtr1->m_other = particlePtr2;
		particlePtr2->m_other = particlePtr1;

		cout <<"ParticlePtr1의 ID: "<< particlePtr1->m_nID<<endl;
		cout <<"ParticlePtr2의 ID: "<< particlePtr2->m_nID<<endl;
	}
	cout <<"ParticlePtr1의 ID: "<<particlePtr1->m_nID<<endl;
}
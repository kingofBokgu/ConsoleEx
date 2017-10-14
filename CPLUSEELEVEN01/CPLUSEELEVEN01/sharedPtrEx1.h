#include<iostream>
#include<memory>

using namespace std;

class Particle
{
public:
	int m_ID;
	Particle();
	Particle(int nID);
	~Particle();
};

Particle::Particle()
{
	cout <<"Particle �⺻ ������" <<endl;
}

Particle::Particle(int nID)
{
	m_ID = nID;
	cout <<"Particle"<<m_ID<<"�� ����"<<endl;
}
Particle::~Particle()
{
	cout<<"Particle"<<m_ID<<"�� �Ҹ�"<<endl;
}

Particle* GetPariticlePointer(shared_ptr<Particle>& ParticlePtr)
{
	return ParticlePtr.get();
}
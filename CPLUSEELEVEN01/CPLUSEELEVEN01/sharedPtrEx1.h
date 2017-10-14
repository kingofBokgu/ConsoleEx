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
	cout <<"Particle 기본 생성자" <<endl;
}

Particle::Particle(int nID)
{
	m_ID = nID;
	cout <<"Particle"<<m_ID<<"번 생성"<<endl;
}
Particle::~Particle()
{
	cout<<"Particle"<<m_ID<<"번 소멸"<<endl;
}

Particle* GetPariticlePointer(shared_ptr<Particle>& ParticlePtr)
{
	return ParticlePtr.get();
}
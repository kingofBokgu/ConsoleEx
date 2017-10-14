#include<iostream>
#include<memory>

using namespace std;

class Particle
{
public:
	int m_nID;
public:
	Particle(int nID);
	~Particle();
};

Particle::Particle(int nID)
{
	m_nID = nID;
	cout <<"Particle" << m_nID <<"번 생성."<<endl;
}
Particle::~Particle()
{
	cout <<"Particle"<< m_nID<<"번 소멸."<<endl;
}

//Pointer 함수로 인스턴스 포인터를 얻기 위해 Get()함수를 리턴하고 있다. 
Particle* GetParticlePointer( unique_ptr<Particle> &ParticlePtr)
{
	return ParticlePtr.get();
}

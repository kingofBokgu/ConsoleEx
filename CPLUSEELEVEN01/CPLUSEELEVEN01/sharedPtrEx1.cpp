#include"sharedPtrEx1.h"

void main()
{
	shared_ptr<Particle> ParticlePtr(new Particle(10));
	Particle& ParticleRef = *ParticlePtr;
	cout <<"ParticleRef�� ID: "<< ParticleRef.m_ID <<endl;

	Particle* pParticle = GetPariticlePointer(ParticlePtr);
	cout <<"pParticle�� ID: "<<pParticle->m_ID<<endl;

	cout <<"ParticlePtr�� ID: "<<ParticlePtr->m_ID << endl;
}

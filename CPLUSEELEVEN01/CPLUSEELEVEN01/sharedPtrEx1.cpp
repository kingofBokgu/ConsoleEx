#include"sharedPtrEx1.h"

void main()
{
	shared_ptr<Particle> ParticlePtr(new Particle(10));
	Particle& ParticleRef = *ParticlePtr;
	cout <<"ParticleRefÀÇ ID: "<< ParticleRef.m_ID <<endl;

	Particle* pParticle = GetPariticlePointer(ParticlePtr);
	cout <<"pParticleÀÇ ID: "<<pParticle->m_ID<<endl;

	cout <<"ParticlePtrÀÇ ID: "<<ParticlePtr->m_ID << endl;
}

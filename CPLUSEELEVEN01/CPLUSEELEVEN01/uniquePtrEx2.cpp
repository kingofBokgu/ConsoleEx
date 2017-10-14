#include"uniquePtrEx2.h"

void main()
{
	unique_ptr<Particle> ParticlePtr(new Particle(10));

	//Particle �ν��Ͻ��� ������ �� ���� ��� ���� ���
	Particle& ParticleRef = *ParticlePtr;
	cout<<"ParticleRef�� ID:"<<ParticleRef.m_nID<<endl;

	//Particle�� �ν��Ͻ� �����͸� �� ��� ���� ���
	Particle* pParticle = GetParticlePointer(ParticlePtr);
	cout<<"pParticle�� ID:"<<pParticle->m_nID<<endl;

	//Particle1�� ���ؼ� Particle �ν��Ͻ��� ��� ����
	cout<<"ParticlePtr�� ID:"<<ParticlePtr->m_nID<<endl;


}
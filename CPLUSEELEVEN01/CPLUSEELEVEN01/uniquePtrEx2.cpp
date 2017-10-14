#include"uniquePtrEx2.h"

void main()
{
	unique_ptr<Particle> ParticlePtr(new Particle(10));

	//Particle 인스턴스의 참조를 얻어서 직접 멤버 변수 사용
	Particle& ParticleRef = *ParticlePtr;
	cout<<"ParticleRef의 ID:"<<ParticleRef.m_nID<<endl;

	//Particle의 인스턴스 포인터를 얻어서 멤버 변수 사용
	Particle* pParticle = GetParticlePointer(ParticlePtr);
	cout<<"pParticle의 ID:"<<pParticle->m_nID<<endl;

	//Particle1을 통해서 Particle 인스턴스의 멤버 접근
	cout<<"ParticlePtr의 ID:"<<ParticlePtr->m_nID<<endl;


}
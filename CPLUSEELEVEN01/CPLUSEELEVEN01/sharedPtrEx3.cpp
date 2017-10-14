#include"sharedPtrEx1.h"

/*share_ptr끼리 서로의 객체 교환하기*/
void main()
{
	shared_ptr<Particle> ParticlePtr1(new Particle(10));
	cout<<"PaticlePtr1의 ID : "<< ParticlePtr1->m_ID <<endl;
	
	shared_ptr<Particle> ParticlePtr2(new Particle(20));
	cout<<"ParticlePtr2의 ID : "<< ParticlePtr2->m_ID <<endl;

	cout<<"swap 사용" <<endl;
	ParticlePtr1.swap(ParticlePtr2);

	cout<<"ParticlePtr1의 ID: "<< ParticlePtr1->m_ID<<endl;
	cout<<"ParticlePtr2의 ID: "<< ParticlePtr2->m_ID<<endl;


}
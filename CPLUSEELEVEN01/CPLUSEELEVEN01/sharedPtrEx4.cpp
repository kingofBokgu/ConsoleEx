#include"sharedPtrEx1.h"

/*배열 객체 다루기*/
void main()
{
	cout <<"shared_ptr - 동적 배열 사용"<< endl;
	
	shared_ptr<Particle> ParticlePtr(new Particle[2], default_delete<Particle[]>());
	ParticlePtr.get()[0].m_ID =11;
	ParticlePtr.get()[1].m_ID =12;

	cout <<ParticlePtr.get()[0].m_ID<<","<<
		ParticlePtr.get()[1].m_ID <<endl;

}
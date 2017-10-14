#include"sharedPtrEx1.h"

/*명시적으로 관리 하는 객체 삭제 및 다른 객체로 바꾸기*/
void main()
{
	shared_ptr<Particle> ParticlePtr(new Particle(10));
	cout <<"Particle의 ID :"<<ParticlePtr->m_ID << endl;
	
	cout<<"reset - 다른 인스턴스로 교체"<<endl;
	ParticlePtr.reset(new Particle(11));
	cout<<"ParticlePtr의 ID: "<<ParticlePtr->m_ID <<endl;

	cout<<"reset-인스턴스 삭제"<<endl;
	ParticlePtr.reset();
	cout<<"ParticlePtr의 참조수: "<<ParticlePtr.use_count() <<endl;


}
#include"sharedPtrEx1.h"

/*��������� ���� �ϴ� ��ü ���� �� �ٸ� ��ü�� �ٲٱ�*/
void main()
{
	shared_ptr<Particle> ParticlePtr(new Particle(10));
	cout <<"Particle�� ID :"<<ParticlePtr->m_ID << endl;
	
	cout<<"reset - �ٸ� �ν��Ͻ��� ��ü"<<endl;
	ParticlePtr.reset(new Particle(11));
	cout<<"ParticlePtr�� ID: "<<ParticlePtr->m_ID <<endl;

	cout<<"reset-�ν��Ͻ� ����"<<endl;
	ParticlePtr.reset();
	cout<<"ParticlePtr�� ������: "<<ParticlePtr.use_count() <<endl;


}
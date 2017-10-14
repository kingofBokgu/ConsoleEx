#include"sharedPtrEx1.h"

/*share_ptr���� ������ ��ü ��ȯ�ϱ�*/
void main()
{
	shared_ptr<Particle> ParticlePtr1(new Particle(10));
	cout<<"PaticlePtr1�� ID : "<< ParticlePtr1->m_ID <<endl;
	
	shared_ptr<Particle> ParticlePtr2(new Particle(20));
	cout<<"ParticlePtr2�� ID : "<< ParticlePtr2->m_ID <<endl;

	cout<<"swap ���" <<endl;
	ParticlePtr1.swap(ParticlePtr2);

	cout<<"ParticlePtr1�� ID: "<< ParticlePtr1->m_ID<<endl;
	cout<<"ParticlePtr2�� ID: "<< ParticlePtr2->m_ID<<endl;


}
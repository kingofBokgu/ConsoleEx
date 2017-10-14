#include"sharedPtrEx1.h"

/*������ �����ϱ� - memory pool���� �����ϰ� ���ȴ�.*/
void main()
{
	shared_ptr<Particle> Particle1(new Particle,[](Particle* pParticle){
		cout<<"Call Deleter: Particle1"<<endl;
		delete pParticle;
	});

	//�迭 ��ü
	cout<<"�迭 ��ü"<<endl;
	shared_ptr<Particle> Particle2(
		new Particle[3],[](Particle* pParticle){
			cout<<"call Deleter : Particle2"<<endl;
			delete[] pParticle;
	});
}
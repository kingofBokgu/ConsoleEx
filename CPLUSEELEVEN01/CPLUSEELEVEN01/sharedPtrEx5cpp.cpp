#include"sharedPtrEx1.h"

/*삭제자 지정하기 - memory pool에서 유용하게 사용된다.*/
void main()
{
	shared_ptr<Particle> Particle1(new Particle,[](Particle* pParticle){
		cout<<"Call Deleter: Particle1"<<endl;
		delete pParticle;
	});

	//배열 객체
	cout<<"배열 객체"<<endl;
	shared_ptr<Particle> Particle2(
		new Particle[3],[](Particle* pParticle){
			cout<<"call Deleter : Particle2"<<endl;
			delete[] pParticle;
	});
}
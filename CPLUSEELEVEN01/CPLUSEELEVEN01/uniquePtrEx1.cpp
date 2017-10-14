#include"uniquePtrEx1.h"

void main()
{
	{
		unique_ptr<Particle> particlePtr(new Particle(1));
	}

	unique_ptr<Particle> ParticlePtrs1(new Particle(1));
	vector<unique_ptr<Particle>> ParticlePtrs;
	cout<<"컨테이너 ParticlePtrs에 ParticlePtrs1넣기"<<endl;

	ParticlePtrs.push_back(move(ParticlePtrs1));

	if(ParticlePtrs1.get() == nullptr)
	{
		cout <<"PaticlePtr1에서 관리 하는 객체 없음"<<endl;
	}

}
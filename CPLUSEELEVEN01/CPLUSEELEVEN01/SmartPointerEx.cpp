#include "Particle.h"

/*
메모리 관리 : 동적 메모리 할당을 할 경우 해제를 해줘야 하는데, 해주지 않을경우에는 메모리 누수가 발생한다.
java나 c#에서는 가비지 컬렉터가 작동하기 때문에 메모리를 자동으로 관리 해 주지만, 가비지 컬렉션을 너무 자주 작동하면
성능상 좋지 않다. 

c++에서는 사용하지 않는 메모리를 자동으로 해제 시켜 주는 shared_ptr 과  unique_ptr이라는 라이브러리가 새로 생겼다. 
전에 auto_ptr이라는것이 있었지만, 반만 스마트 하다. auto_ptr의 단점을 해결해 주는것이 shared_ptr과 unique_ptr이다.
*/


void main()
{
	shared_ptr<Particle> particle1(new Particle(1));
	cout << "Particle1 참조 수 :" << particle1.use_count() << endl;
	
	//스코프
	{
		shared_ptr<Particle> particle2 = particle1;
		cout << "particle1의 참조수 :" << particle1.use_count() << endl;
		//particle2는 스코프를 벗어나면 파괴된다. 
		cout << "particle2의 참조수 :" << particle2.use_count() << endl;
	}

	cout << "Particle1의 참조수 :" << particle1.use_count() << endl;
}
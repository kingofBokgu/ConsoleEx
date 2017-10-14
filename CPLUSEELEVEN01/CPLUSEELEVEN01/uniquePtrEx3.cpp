#include"uniquePtrEx3.h"

void main()
{
	unique_ptr<Particle> character1(new Particle(1));
	character1.release();

	if(character1 == false)
	{
		cout<<"character1 == false"<< endl<<endl;
	}

	unique_ptr<Particle> character2(new Particle(2));
	character2.reset(new Particle(22));
	cout<<"character2ÀÇ ID:"<<character2->m_nID<<endl;
	character2.reset();

	if(character2 == false)
	{
		cout <<"character2== false"<<endl<<endl;
	}

	cout<<"swap()"<<endl;
	unique_ptr<Particle> character3(new Particle(3));
	unique_ptr<Particle> character4(new Particle(4));

	character3.swap(character4);
	cout <<"ParticlePtr3ÀÇ ID: "<<character3->m_nID<<endl;
	cout <<"ParticlePtr4ÀÇ ID: "<<character4->m_nID<<endl;


}
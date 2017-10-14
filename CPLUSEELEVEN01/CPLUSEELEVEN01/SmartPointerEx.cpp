#include "Particle.h"

/*
�޸� ���� : ���� �޸� �Ҵ��� �� ��� ������ ����� �ϴµ�, ������ ������쿡�� �޸� ������ �߻��Ѵ�.
java�� c#������ ������ �÷��Ͱ� �۵��ϱ� ������ �޸𸮸� �ڵ����� ���� �� ������, ������ �÷����� �ʹ� ���� �۵��ϸ�
���ɻ� ���� �ʴ�. 

c++������ ������� �ʴ� �޸𸮸� �ڵ����� ���� ���� �ִ� shared_ptr ��  unique_ptr�̶�� ���̺귯���� ���� �����. 
���� auto_ptr�̶�°��� �־�����, �ݸ� ����Ʈ �ϴ�. auto_ptr�� ������ �ذ��� �ִ°��� shared_ptr�� unique_ptr�̴�.
*/


void main()
{
	shared_ptr<Particle> particle1(new Particle(1));
	cout << "Particle1 ���� �� :" << particle1.use_count() << endl;
	
	//������
	{
		shared_ptr<Particle> particle2 = particle1;
		cout << "particle1�� ������ :" << particle1.use_count() << endl;
		//particle2�� �������� ����� �ı��ȴ�. 
		cout << "particle2�� ������ :" << particle2.use_count() << endl;
	}

	cout << "Particle1�� ������ :" << particle1.use_count() << endl;
}
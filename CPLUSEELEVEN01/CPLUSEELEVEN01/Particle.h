#include <iostream>
#include <memory>
using namespace std;

class Particle
{
private:
	int m_nID;
public:
	Particle(int nID);
	~Particle();
};

Particle::Particle(int nID)
{
	m_nID = nID;
	cout << "Particle "<< m_nID << "�� ����" <<endl;
}

Particle::~Particle()
{
	cout << "Particle" << m_nID << "�� �Ҹ�" << endl;
}

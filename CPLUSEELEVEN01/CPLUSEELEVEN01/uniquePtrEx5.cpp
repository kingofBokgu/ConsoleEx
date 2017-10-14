#include"uniquePtrEx5.h"

void main()
{
	unique_ptr<UniqueArray[]> uArray(new UniqueArray[3]);
	uArray[0].m_nID =2;
	uArray[1].m_nID =3;
	uArray[2].m_nID =4;

	for(int i=0; i<3;i++)
	{
		cout <<uArray[i].m_nID<<endl;
	}

}
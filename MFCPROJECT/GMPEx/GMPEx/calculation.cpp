#include<iostream>
#include<math.h>
using namespace std;

void main()
{
	//�Ҽ��� �ŵ� ���� ���
	float num1 = powf(4.0f,3.5f);
	double num2 = pow(4.0,3.5);

	//int�� �־ �Ǳ� �Ǵ� ����
	int	num3 = pow(2,4);

	cout << "num1 :" << num1 << endl;
	cout << "num2 :" << num2 << endl;
	cout << "num3 :" << num3 << endl;
	
	cout <<"****************************"<< endl;

	//������ ���
	float sNum1 = sqrtf(16.0f);
	double sNum2 = sqrt(16.0);

	//sqrt�� �̿����� �ʾƵ� pow�� ���� ��� ���� ���� �� �ִ�.
	float spNum1 = powf(16.0f,0.5f);
	double spNum2 = pow(16.0, 0.5);

	cout <<"sNum1 : "<< sNum1 << endl;
	cout <<"sNum2 : "<< sNum2 << endl;
	cout <<"spNum1: "<< spNum1<< endl;
	cout <<"spNum2: "<< spNum2<< endl;

	cout <<"****************************"<< endl;
	//������ ����
	int mock = 18%4;
	cout <<"���� ? :" << mock << endl;

	float mNum1 = fmodf(18.0f, 4.0f);
	double mNum2 = fmod(18.0, 4.0);

	cout <<"mod1 : " << mNum1 << endl;
	cout <<"mod2 : " << mNum2 << endl;

	cout <<"****************************"<< endl;

	//��/�� ������ 
	int iNum1 = 1;
	int iNum2 = 2;

	int result = 0;

	//iNum1�� ���� ���� ��Ų�� �Ҷ�
	cout <<"iNum�� ���� ���� ��Ű�� "<< endl;
	++iNum1;
	cout << iNum1 << endl;

	iNum2++;
	cout << "iNum2 : " <<iNum2 << endl; // ����� 3�� ���;� ��������
	cout << "iNum2 : " <<iNum2++ << endl; // ���⼱ ����� 4�� ���;� �ϴµ� 3�� ���´� 
	// ��? �׷���? �� ������ iNum2�� ����� �Լ��� ���� �ǰ� ���� �ȴ�. 
	cout << "iNum2 : " << iNum2 << endl; //���⼭ 4�� ���� �� �� �ִ�. 

	cout << "iNum�� ���� ���� ��Ű�� " << endl;
	--iNum1;
	cout <<"iNum1 :" << iNum1 << endl;
	cout <<"iNum1 :" << iNum1-- << endl;
	cout <<"iNum1 :" << iNum1 << endl;




}
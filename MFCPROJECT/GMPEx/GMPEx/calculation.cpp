#include<iostream>
#include<math.h>
using namespace std;

void main()
{
	//소수점 거듭 제곱 계산
	float num1 = powf(4.0f,3.5f);
	double num2 = pow(4.0,3.5);

	//int를 넣어도 되긴 되는 구나
	int	num3 = pow(2,4);

	cout << "num1 :" << num1 << endl;
	cout << "num2 :" << num2 << endl;
	cout << "num3 :" << num3 << endl;
	
	cout <<"****************************"<< endl;

	//제곱근 계산
	float sNum1 = sqrtf(16.0f);
	double sNum2 = sqrt(16.0);

	//sqrt를 이용하지 않아도 pow로 같은 결과 값을 얻을 수 있다.
	float spNum1 = powf(16.0f,0.5f);
	double spNum2 = pow(16.0, 0.5);

	cout <<"sNum1 : "<< sNum1 << endl;
	cout <<"sNum2 : "<< sNum2 << endl;
	cout <<"spNum1: "<< spNum1<< endl;
	cout <<"spNum2: "<< spNum2<< endl;

	cout <<"****************************"<< endl;
	//나머지 연산
	int mock = 18%4;
	cout <<"몫은 ? :" << mock << endl;

	float mNum1 = fmodf(18.0f, 4.0f);
	double mNum2 = fmod(18.0, 4.0);

	cout <<"mod1 : " << mNum1 << endl;
	cout <<"mod2 : " << mNum2 << endl;

	cout <<"****************************"<< endl;

	//증/감 연산자 
	int iNum1 = 1;
	int iNum2 = 2;

	int result = 0;

	//iNum1의 값을 증가 시킨다 할때
	cout <<"iNum의 값을 증가 시키자 "<< endl;
	++iNum1;
	cout << iNum1 << endl;

	iNum2++;
	cout << "iNum2 : " <<iNum2 << endl; // 결과가 3이 나와야 정상이지
	cout << "iNum2 : " <<iNum2++ << endl; // 여기선 결과가 4가 나와야 하는데 3이 나온다 
	// 왜? 그럴까? 그 이유는 iNum2는 입출력 함수가 실행 되고 증가 된다. 
	cout << "iNum2 : " << iNum2 << endl; //여기서 4가 됨을 알 수 있다. 

	cout << "iNum의 값을 감소 시키자 " << endl;
	--iNum1;
	cout <<"iNum1 :" << iNum1 << endl;
	cout <<"iNum1 :" << iNum1-- << endl;
	cout <<"iNum1 :" << iNum1 << endl;




}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void main()
{
	//캡쳐 : 람다를 사용할때 람다 외부에 정의 되어 있는 변수를 람다 내부에서 사용하고 싶을때
	// 캡쳐는 참조나 복사로 전달이 가능하다. 
	// 참조 : &, 복사로 전달 :  변수이름 을 기술 한다.
	// 람다 외부의 모든 변수를 복사하여 캡쳐 할때는 [=]을 사용한다.
	
	vector <int> Moneys;

	Moneys.push_back(100);
	Moneys.push_back(4000);
	Moneys.push_back(50);
	Moneys.push_back(7);

	int totalMoney1 = 0;
	int totalBigMoney =0;
	//람다 식이 외부에 있는 totalMoney1 변수를 참조로 캡쳐하여 Moneys에 있는 값을 모두 더한다. 
	/*
	for_each( 
		Moneys.begin(), Moneys.end(), [&totalMoney1](int money){ totalMoney1 += money;}
	);
	*/
	for_each(
		Moneys.begin(), Moneys.end(), [&](int money){ totalMoney1 += money; if(money > 1000) totalBigMoney += money;}
	);

	cout << "Total Money 1 :" << totalMoney1 << endl;
	cout << "Total BigMoney:" << totalBigMoney << endl;


	//default 캡쳐 : 람다 외부의 모든 변수를 참조 or 복사로 캡쳐하고 일부는 복사 or 참조로 캡쳐 할 수 있다. 
	// 그러나, 같은 변수를 캡쳐 하거나 default 캡쳐한 일부 변수를 같은 참조 or 복사 방식으로 캡쳐 할 수 없다. 
	int n1,n2,n3,n4,n5;
	// n3,n4, n5 는 참조 ,  n1, n2는 복사
	[&, n1, n2]{};
	// n3, n4, n5 는 복사 ,  n1, n2는 참조
	[=, &n1,&n2]{};
	//Error !  같은 변수를 사용할 경우 
	//[n1,n1]{};
	//Error !  n1을 이미 default 참조로 사용할 경우
	//[&,&n1]{};
	//Error !  n1을 이미  default 복사로 사용할 경우 
	//[=, n1]{};

}
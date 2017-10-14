#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void main()
{
	//ĸ�� : ���ٸ� ����Ҷ� ���� �ܺο� ���� �Ǿ� �ִ� ������ ���� ���ο��� ����ϰ� ������
	// ĸ�Ĵ� ������ ����� ������ �����ϴ�. 
	// ���� : &, ����� ���� :  �����̸� �� ��� �Ѵ�.
	// ���� �ܺ��� ��� ������ �����Ͽ� ĸ�� �Ҷ��� [=]�� ����Ѵ�.
	
	vector <int> Moneys;

	Moneys.push_back(100);
	Moneys.push_back(4000);
	Moneys.push_back(50);
	Moneys.push_back(7);

	int totalMoney1 = 0;
	int totalBigMoney =0;
	//���� ���� �ܺο� �ִ� totalMoney1 ������ ������ ĸ���Ͽ� Moneys�� �ִ� ���� ��� ���Ѵ�. 
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


	//default ĸ�� : ���� �ܺ��� ��� ������ ���� or ����� ĸ���ϰ� �Ϻδ� ���� or ������ ĸ�� �� �� �ִ�. 
	// �׷���, ���� ������ ĸ�� �ϰų� default ĸ���� �Ϻ� ������ ���� ���� or ���� ������� ĸ�� �� �� ����. 
	int n1,n2,n3,n4,n5;
	// n3,n4, n5 �� ���� ,  n1, n2�� ����
	[&, n1, n2]{};
	// n3, n4, n5 �� ���� ,  n1, n2�� ����
	[=, &n1,&n2]{};
	//Error !  ���� ������ ����� ��� 
	//[n1,n1]{};
	//Error !  n1�� �̹� default ������ ����� ���
	//[&,&n1]{};
	//Error !  n1�� �̹�  default ����� ����� ��� 
	//[=, n1]{};

}
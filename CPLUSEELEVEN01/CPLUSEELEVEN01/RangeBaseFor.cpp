#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

void main()
{
	//for���� foreach��  rage based for��

	int numberList[5] ={1,2,3,4,5};

	cout <<"�Ϲ����� for��" << endl;
	for(int i=0; i<5;i++)
	{
		cout <<" for result :"<< i << endl;
	}

	cout << "foreach ��" << endl;
	for each(int i in numberList)
	{
		cout <<"for each result :" << i << endl;
	}

	cout << "rage based for ��"<< endl;
	for(auto i: numberList)
	{
		cout << i << endl;
	}


	cout << "range based for -vector" << endl;
	vector<int> numberVector;
	numberVector.push_back(1);
	numberVector.push_back(2);
	numberVector.push_back(3);

	for(auto i : numberVector)
	{
		cout << "numberVector : "<< i << endl;
	}

	cout << endl;

	cout <<"ranged based for - unordered map" << endl;
	unordered_map<int,std::string> numString;
	numString.insert(make_pair<int,std::string>(1,"11"));
	numString.insert(make_pair<int,std::string>(2,"22"));
	numString.insert(make_pair<int,std::string>(3,"33"));
	
	for(auto i : numString)
	{
		cout << "key :" << i.first <<  endl;
		cout << "value :"<< i.second << endl;
	}

	//�⺻������ STL�� ���ͷ����͸� �����ϴ� �����̳ʶ�� range based for���� ���� ���� ����� �� �ִ�.
	//range based for ������ ������ ���� ��� ���� : ������ ����Ѵ�. 
	// vector ���� ���� �ƿ� ���� �� �� ���� �Ϸ��� : const�� ����Ѵ�. 
	// ��� ���� ������ �� ���� �Ϸ��� : const ������ ����Ѵ�.
	vector<int> numberVector1;
	numberVector1.push_back(1);
	numberVector1.push_back(2);
	numberVector1.push_back(3);

	for(auto i : numberVector1)
	{
		cout << i << "* 10 :";
		i *= 10;
		cout << i << endl;
	}

	//�ٽ� ���� ������ �Ǿ����� Ȯ��
	for(auto i : numberVector1)
	{
		cout <<"outer numberVector1 = ";
		cout << i << endl;
	}

	//�� ��� �� ����
	// rage based for�� ���۷����߰�
	cout <<"rage based for element alter" << endl;
	for(auto &i :  numberVector1)
	{
		i *= 10;
		cout << i << endl;
	}

	for(auto i : numberVector1)
	{
		cout << "outer reference numVector1 = ";
		cout << i << endl;
	}
	




}
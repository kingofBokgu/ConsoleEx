#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

void main()
{
	//for문과 foreach문  rage based for문

	int numberList[5] ={1,2,3,4,5};

	cout <<"일반적인 for문" << endl;
	for(int i=0; i<5;i++)
	{
		cout <<" for result :"<< i << endl;
	}

	cout << "foreach 문" << endl;
	for each(int i in numberList)
	{
		cout <<"for each result :" << i << endl;
	}

	cout << "rage based for 문"<< endl;
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

	//기본적으로 STL의 이터레이터를 지원하는 컨테이너라면 range based for문을 문제 없이 사용할 수 있다.
	//range based for 문에서 데이터 셋의 요소 변경 : 참조를 사용한다. 
	// vector 안의 값을 아예 변경 할 수 없게 하려면 : const를 사용한다. 
	// 요소 값을 변경할 수 없게 하려면 : const 참조를 사용한다.
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

	//다시 값이 변경이 되었는지 확인
	for(auto i : numberVector1)
	{
		cout <<"outer numberVector1 = ";
		cout << i << endl;
	}

	//각 요소 값 변경
	// rage based for에 레퍼런스추가
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
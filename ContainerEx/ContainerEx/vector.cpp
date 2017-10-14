#include<iostream>
#include<string>
#include<vector>

using namespace std;

template <typename C> 
void dump(const char *desc, C c)
{
	cout.width(12);
	cout << left << desc <<"====>";
	copy(c.begin(), c.end(), ostream_iterator<typename C::value_type>(cout,""));
	cout <<endl;
}

void main()
{
	//디폴트 생성자
	vector<string> v1;
	dump("v1",v1);
	
	//크기 10의 실수형 벡터이되 초기값을 주지 않았다.
	//실수의 디폴트 값인 0.0으로 초기화 된다. 
	//if)vector<double> v2(10,1.2); 10개의 요소들은 모두 1.2의 값을 가진다. 
	vector<double> v2(10);
	dump("v2",v2);

	//정수형, 크기는 10이고 초기값은 7이다. 열개 모두 7로 셋팅
	vector<int> v3(10,7);
	dump("v3",v3);

	//v3의 복사 생성자. v3과 같은 모양을 가진다. 
	vector<int> v4(v3);
	dump("v4",v4);

	//반복자 구간을 받아드리는 생성자 
	//다른 컨테이너의 구간으로 부터 초기 값을 받아 온다. 
	int ar[] ={1,2,3,4,5,6,7,8,9};
	vector<int> v5(&ar[2],&ar[5]);
	dump("v5",v5);
	

	//정수 배열 ar의 일부 구간을 취해 생성 하도록 하였는데
	// 리스트나 데크 또는 이미 만들어진 다른 벡터의 구간으로 부터 
	//생성 할 수도 있다. v5벡터가 생성되는 과정은 다음과 같다. 
	//반복자 구간의 끝은 항상 제외 된다. 

	cout <<"======vectormem========="<<endl;

	vector<int> vi;
	cout<<"max_size1: "<<vi.max_size()<<endl;
	cout<<"max_size1: "<<vi.size()<<endl;
	cout<<"capcity1 : "<<vi.capacity()<<endl;
	cout<<endl;
	vi.push_back(123);
	vi.push_back(456);
	cout<<"max_size2: "<<vi.size()<<endl;
	cout<<"capcity2 : "<<vi.capacity()<<endl;
	cout<<endl;

	vi.resize(10);
	cout<<"max_size3: "<<vi.size()<<endl;
	cout<<"capcity3 : "<<vi.capacity()<<endl;
	cout<<endl;

	vi.reserve(20);
	cout<<"max_size4: "<<vi.size()<<endl;
	cout<<"capcity4 : "<<vi.capacity()<<endl;
	cout<<endl;

}
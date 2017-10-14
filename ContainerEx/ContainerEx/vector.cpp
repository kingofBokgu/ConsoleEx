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
	//����Ʈ ������
	vector<string> v1;
	dump("v1",v1);
	
	//ũ�� 10�� �Ǽ��� �����̵� �ʱⰪ�� ���� �ʾҴ�.
	//�Ǽ��� ����Ʈ ���� 0.0���� �ʱ�ȭ �ȴ�. 
	//if)vector<double> v2(10,1.2); 10���� ��ҵ��� ��� 1.2�� ���� ������. 
	vector<double> v2(10);
	dump("v2",v2);

	//������, ũ��� 10�̰� �ʱⰪ�� 7�̴�. ���� ��� 7�� ����
	vector<int> v3(10,7);
	dump("v3",v3);

	//v3�� ���� ������. v3�� ���� ����� ������. 
	vector<int> v4(v3);
	dump("v4",v4);

	//�ݺ��� ������ �޾Ƶ帮�� ������ 
	//�ٸ� �����̳��� �������� ���� �ʱ� ���� �޾� �´�. 
	int ar[] ={1,2,3,4,5,6,7,8,9};
	vector<int> v5(&ar[2],&ar[5]);
	dump("v5",v5);
	

	//���� �迭 ar�� �Ϻ� ������ ���� ���� �ϵ��� �Ͽ��µ�
	// ����Ʈ�� ��ũ �Ǵ� �̹� ������� �ٸ� ������ �������� ���� 
	//���� �� ���� �ִ�. v5���Ͱ� �����Ǵ� ������ ������ ����. 
	//�ݺ��� ������ ���� �׻� ���� �ȴ�. 

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
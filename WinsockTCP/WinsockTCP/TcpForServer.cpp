#include<WinSock2.h>
#include<iostream>

/*error LNK2019�� ����*/
#pragma comment(lib,"ws2_32.lib")

using namespace std;

void main()
{
	//1. ���� ����
	SOCKET server;
	server = socket(PF_INET,SOCK_STREAM,0);
	cout << server<<endl;
	//2. ������ ���Ͽ� ��Ʈ��ȣ �Ҵ� :��ȭ ��ȣ �Ҵ�
	struct sockaddr_in server_addr;
	memset(&server_addr,0,sizeof(server_addr));
	server_addr.sin_family = AF_INET;
	server_addr.sin_port   = htons(443);
	server_addr.sin_addr.s_addr = inet_addr("111.221.29.105");

	int test =bind(server, (sockaddr*)&server_addr,sizeof(server_addr));
	cout <<test<<endl;
	

	

	

}
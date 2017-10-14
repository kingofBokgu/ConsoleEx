#include<iostream>

using namespace std;

#if 0
//���� ���� : 16������ ǥ��,
#define STATUS_DOKU     (0x01) //��
#define STATUS_NEMURI   (0x02) //����
#define STATUS_SEKIKA   (0x04) //��ȭ
#define STATUS_MAHI     (0x08) //����
#define STATUS_MOUMOKU  (0x10) //�Ǹ� 
#define STATUS_CHINMOKU (0x20) //ħ��
#define STATUS_KONRAN   (0x40) //ȥ��
#define STATUS_TOUKETSU (0x80) //����
#else
//��Ʈ ����Ʈ�ε� ����� �� �ִ�.: 16���� ���ٴ� �������� ���� �߰��� ���� �߰��ϱ⿡�� �������� �ʴ�.
#define STATUS_DOKU     (1<<0) //��
#define STATUS_NEMURI   (1<<1) //����
#define STATUS_SEKIKA   (1<<2) //��ȭ
#define STATUS_MAHI     (1<<3) //����
#define STATUS_MOUMOKU  (1<<4) //�Ǹ� 
#define STATUS_CHINMOKU (1<<5) //ħ��
#define STATUS_KONRAN   (1<<6) //ȥ��
#define STATUS_TOUKETSU (1<<7) //����

#endif


void main()
{
	unsigned char a =(~0x24);
	unsigned char b =(!0x24);
	unsigned char c =(~0x00);
	unsigned char d =(!0x00);

	printf("a = 0x%02x \n",a);
	printf("b = 0x%02x \n",b);
	printf("c = 0x%02x \n",c);
	printf("d = 0x%02x \n",d);

	cout <<"==============================="<<endl;
	//�� ��
	unsigned char e = 0x24 | 0x61;
	printf("e = 0x%02x \n", e);

	cout <<"==============================="<<endl;
	//�� ��
	unsigned char f = 0x24 & 0x61;
	printf("f = 0x%02x \n",f);

	cout <<"================================"<<endl;
	//��Ÿ�� �� ��
	unsigned char g = 0x24 ^ 0x61;
	printf("g = 0x%02x \n",g);

	cout <<"================================="<<endl;
	//���� �ʱ� ����
	unsigned char status =0;

	//���� �ڽ��� ���¿� �߰� �Ҷ�
	status = status | STATUS_DOKU;
	//��ȭ�� �ڽ��� ���¿��� �� ��
	status = status & (~STATUS_SEKIKA);


}
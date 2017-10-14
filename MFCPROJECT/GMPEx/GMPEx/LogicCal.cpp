#include<iostream>

using namespace std;

#if 0
//상태 정의 : 16진수로 표현,
#define STATUS_DOKU     (0x01) //독
#define STATUS_NEMURI   (0x02) //수면
#define STATUS_SEKIKA   (0x04) //석화
#define STATUS_MAHI     (0x08) //마비
#define STATUS_MOUMOKU  (0x10) //실명 
#define STATUS_CHINMOKU (0x20) //침묵
#define STATUS_KONRAN   (0x40) //혼란
#define STATUS_TOUKETSU (0x80) //동결
#else
//비트 시프트로도 사용할 수 있다.: 16진수 보다는 가독성이 좋고 중간에 값을 추가하기에도 불편하지 않다.
#define STATUS_DOKU     (1<<0) //독
#define STATUS_NEMURI   (1<<1) //수면
#define STATUS_SEKIKA   (1<<2) //석화
#define STATUS_MAHI     (1<<3) //마비
#define STATUS_MOUMOKU  (1<<4) //실명 
#define STATUS_CHINMOKU (1<<5) //침묵
#define STATUS_KONRAN   (1<<6) //혼란
#define STATUS_TOUKETSU (1<<7) //동결

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
	//논리 합
	unsigned char e = 0x24 | 0x61;
	printf("e = 0x%02x \n", e);

	cout <<"==============================="<<endl;
	//논리 곱
	unsigned char f = 0x24 & 0x61;
	printf("f = 0x%02x \n",f);

	cout <<"================================"<<endl;
	//배타적 논리 합
	unsigned char g = 0x24 ^ 0x61;
	printf("g = 0x%02x \n",g);

	cout <<"================================="<<endl;
	//상태 초기 상태
	unsigned char status =0;

	//독을 자신의 상태에 추가 할때
	status = status | STATUS_DOKU;
	//석화를 자신의 상태에서 뺄 때
	status = status & (~STATUS_SEKIKA);


}
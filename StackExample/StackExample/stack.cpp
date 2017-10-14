#include<stdio.h>
#include<stdlib.h>

typedef struct _NODE{
	int Data;
	struct _NODE *Next;
} NODE;

NODE *head,*end;
NODE *ptrNode;

//���� �ʱ�ȭ �Լ�
void InitializeStack(void)
{
	head = (NODE *)malloc(sizeof(NODE));
	end  = (NODE *)malloc(sizeof(NODE));
	head->Next = end;
	end->Next = end;
}

//push �Լ�
void Push(int num)
{
	ptrNode = (NODE*)malloc(sizeof(NODE));
	ptrNode->Data = num;
	ptrNode->Next = head->Next;
	head->Next = ptrNode;
}

//pop �Լ�
int Pop(void)
{
	int ret;
	ptrNode = head->Next;
	head->Next = head->Next->Next;
	ret = ptrNode->Data;
	free(ptrNode);
	return ret;
}

//������ ������
void DisplayStack(void)
{
	NODE *indexNode;
	printf("head ->");

	for(indexNode = head->Next; indexNode != end; indexNode =indexNode->Next)
	{
		printf("%d ->", indexNode->Data);
	}
	printf("end");
}

void main()
{
	int ret;
	InitializeStack();
	Push(1);
	Push(2);
	Push(3);
	Push(4);

	printf("�ټ� ���� Push() �Լ� ȣ�� �� ���� ��� \n");
	DisplayStack();

	ret = Pop();
	ret = Pop();
	ret = Pop();

	printf("\n ������ Pop() �Լ� ȣ�� �� ���� ��� \n");
	DisplayStack();
}
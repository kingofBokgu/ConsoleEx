#include "node.h"
#define MAX 100

NODE *Stack[MAX];
int Top;

void InitailizeStack(void);
void Push(NODE*);
NODE *Pop(void);
int IsStackEmpty(void);

void InitailizeStack(void)
{
	Top =0;
}

void Push(NODE* ptrNode)
{
	Stack[Top] = ptrNode;
	Top = (Top++) % MAX;
}

NODE *Pop(void)
{
	NODE *ptrNode;
	if(!IsStackEmpty())
	{
		ptrNode = Stack[--Top];
	}else{
		printf("Stack is Empty");
	}

	return NULL;
}
int IsStackEmpty(void)
{
	if(Top==0)
	{
		return TRUE;
	}else{
		return FALSE;
	}
}

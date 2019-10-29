#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int *myAlloc(int);
void dataInput(int *, int);
void dataOutput(int *, int);
void myDelete(int *);

int main()
{
	int *ip;
	int col;
	printf("column 수 입력 : ");
	scanf("%d", &col);
	ip = myAlloc(col);

	if (ip == NULL)
	{
		printf("Memory 할당 실패\n");
		return 1;
	}
	dataInput(ip, col);
	dataOutput(ip, col);
	myDelete(ip);
	return 0;
}

int *myAlloc(int col)
{
	int *p;
	p = (int *)malloc(sizeof(int)*col);
	return p;
}

void dataInput(int *p, int col)
{
	int i;

	for (i = 0; i < col; i++)
	{
		scanf("%d", p+i); // &p[i]
	}
	return ;
}

void dataOutput(int *p, int col)
{
	int i;
	for (i = 0; i < col; i++)
	{
		printf("%d번 방 : %d\n", i, *(p + i));
	}
	return ;
}

void myDelete(int *p)
{
	if (p != NULL)
		free(p);
}
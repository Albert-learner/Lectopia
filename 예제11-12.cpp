#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int **myAlloc(int, int);
void dataInput(int **, int, int);
void dataOutput(int **, int, int);
void myDelete(int **, int);

int main()
{
	int **ip;
	int row, col;

	printf("row 수 입력 : ");
	scanf("%d", &row);
	printf("column 수 입력 : ");
	scanf("%d", &col);

	ip = myAlloc(row, col);
	dataInput(ip, row, col);
	dataOutput(ip, row, col);
	myDelete(ip, row);
	return 0;
}

int **myAlloc(int row, int col)
{
	int **p, i;
	p = (int **)malloc(sizeof(int *)*row);
	
	for (i = 0; i < row; i++)
	{
		p[i] = (int *)malloc(sizeof(int)*col);
	}
	return p;
}

void dataInput(int **p, int row, int col)
{
	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf("%d", (*(p + i) + j));
		}
	}
	return ;
}

void dataOutput(int **p, int row, int col)
{
	int i, j;
	printf("\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
	return ;
}

void myDelete(int **p, int row)
{
	int i;
	for (i = 0; i < row; i++)
	{
		free(*(p+i));
	}
	free(p);
}
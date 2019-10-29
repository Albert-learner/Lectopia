#pragma warning (disable : 4996)
#include <stdio.h>

void array_input(int (*)[4], int);
void array_output(int (*)[4], int);

int main()
{
	int num_ary[3][4];
	int row; //col

	row = sizeof(num_ary) / sizeof(num_ary[0]);
	//col=sizeof(num_ary[0])/sizeof(num_ary[0][0]);
	array_input(num_ary, row);
	array_output(num_ary, row);
	return 0;
}

void array_input(int (*p)[4], int row)
{
	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d행 %d열 방의 값 입력 : ", i, j);
			scanf("%d", &p[i][j]);
		}
	}
	return ;
}

void array_output(int (*p)[4], int row)
{
	int i, j;

	for (i = 0; i < row; i++)
	{
		printf("%d행 : ", i);
		for (j = 0; j < 4; j++)
		{
			printf("%4d", p[i][j]);
		}
		printf("\n");
	}
}
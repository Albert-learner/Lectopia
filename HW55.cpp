/*작성자 : 이재빈 HW55*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void arr_input(int (*ip)[4]);
void output(int(*ip)[4]);

int main()
{
	int arr[3][4];
	srand((unsigned int)time(NULL));
	arr_input(arr);
	output(arr);
	return 0;
}

void arr_input(int(*ip)[4])
{
	int i, j, rand_num;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			rand_num = rand() % 10 + 1;
			ip[i][j] = rand_num;
		}
	}
}

void output(int(*ip)[4])
{
	int i, j, sum = 0, row=0;

	for (i = 0; i < 3; i++)
	{
		printf("%d행 : ", i);
		for (j = 0; j < 4; j++)
		{
			sum += ip[i][j];
			printf("%d ", ip[i][j]);
		}
		printf("   %d행의 합 : %d\n", i, sum);
		sum = 0;
	}
	printf("열의 합 : ");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			row += ip[j][i];
		}
		printf("%d ", row);
		row = 0;
	}
	printf("\n\n");
}
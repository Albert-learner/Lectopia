/*작성자 : 이재빈 HW56*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void arr_input(int(*ip)[5]);
int arr_calc(int(*ip)[5], const char *msg);
void output(int(*ip)[5], int sum1, int sum2, int sum3);

int main()
{
	int arr[5][5], arr_sum1, arr_sum2, arr_sum3;
	printf("(출력 예)\n");

	srand((unsigned int)time(NULL));
	arr_input(arr);
	arr_sum1 = arr_calc(arr, "Sum1");
	arr_sum2 = arr_calc(arr, "Sum2");
	arr_sum3 = arr_calc(arr, "Sum3");

	output(arr, arr_sum1, arr_sum2, arr_sum3);
	return 0;
}

void arr_input(int(*ip)[5])
{
	int i, j, rand_num;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			rand_num = rand() % 20 + 1;
			ip[i][j] = rand_num;
		}
	}
}

int arr_calc(int(*ip)[5], const char *msg)
{
	int sum1=0, sum2=0, sum3=0, i, j;
	if (!strcmp(msg, "Sum1"))
	{
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
			{
				if (i == j)
				{
					sum1 += ip[i][j];
				}
				else
				{
					continue;
				}
			}
		}
		return sum1;
	}
	else if (!strcmp(msg, "Sum2"))
	{
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
			{
				if (i < j)
				{
					sum2 += ip[i][j];
				}
				else
				{
					continue;
				}
			}
		}
		return sum2;
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
			{
				if (i > j)
				{
					sum3 += ip[i][j];
				}
				else
				{
					continue;
				}
			}
		}
		return sum3;
	}
}

void output(int(*ip)[5], int sum1, int sum2, int sum3)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		printf("%d번 행 : ", i);
		for (j = 0; j < 5; j++)
		{
			printf("%d ", ip[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	printf("sum1 = %d\n", sum1);
	printf("sum2 = %d\n", sum2);
	printf("sum3 = %d\n", sum3);
}
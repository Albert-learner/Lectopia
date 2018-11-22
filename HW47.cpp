/*�ۼ��� : ����� HW47*/
#pragma warning (disable : 4996)
#include <stdio.h>

void arr_input(double *dp, int count);
double find_max(double *dp, int count);
double find_min(double *dp, int count);
void output(double max, double min);

int main()
{
	double arr[5], arr_max, arr_min;
	printf("(����� ��)\n");
	arr_input(arr, 5);
	arr_max=find_max(arr, 5);
	arr_min=find_min(arr, 5);
	output(arr_max, arr_min);
	return 0;
}

void arr_input(double *dp, int count)
{
	int i;
	for (i = 0; i < count; i++)
	{
		printf("%d �� �� �� : ", i);
		scanf("%lf", &dp[i]);
	}
	return ;
}

double find_max(double *dp, int count)
{
	int i;
	double max=dp[0];
	for (i = 0; i < count; i++)
	{
		if (max < dp[i])
		{
			max = dp[i];
		}
		else
		{
			;
		}
	}
	return max;
}

double find_min(double *dp, int count)
{
	int i;
	double min=dp[0];

	for (i = 0; i < count; i++)
	{
		if (min > dp[i])
		{
			min = dp[i];
		}
		else
		{
			;
		}
	}
	return min;
}

void output(double max, double min)
{
	printf("\n\n");
	printf("���� ū �� : %.2lf\n", max);
	printf("���� ���� �� : %.2lf\n", min);
}
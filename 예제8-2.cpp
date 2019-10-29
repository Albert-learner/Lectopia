#pragma warning (disable : 4996)
#include <stdio.h>

void array_input(int *, int);
int array_sum(int *, int);

int main()
{
	int sum, ary[10];
	double avg;

	array_input(ary, 10);
	sum = array_sum(ary, 10);
	avg = (double)sum / 10;
	printf("Sum = %d, Avg = %.2lf\n", sum, avg);
	return 0;
}

void array_input(int *ip, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%d번 방의 값 = ", i);
		scanf("%d", &ip[i]);
	}
	return ;
}

int array_sum(int *ip, int count)
{
	int i, sum;

	for (i = 0, sum = 0; i < count; i++)
	{
		sum += ip[i];
	}
	return sum;
}



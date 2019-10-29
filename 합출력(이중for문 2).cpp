#include <stdio.h>

int main()
{
	int i, j, sum = 0;

	for (i = 10; i <= 100; i+=10)
	{
		sum = 0;
		for (j = i - 9; j <= i; j++)
		{
			sum += j;
		}
		printf("1 ~ %d = %d\n", i, sum);
	}
	return 0;
}
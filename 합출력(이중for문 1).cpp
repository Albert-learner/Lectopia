#include <stdio.h>

int main()
{
	int i, j, sum = 0;

	for (i = 1; i < 11; i++)
	{
		for (j = 1; j <= i * 10; j++)
		{
			sum += j;
		}
		printf("1 ~ %d = %d\n", i * 10, sum);
		sum = 0;
	}
	return 0;
}
#include <stdio.h>

int main()
{
	int i, sum=0;

	for (i = 1; i <= 100; i++)
	{
		sum += i;
		if (i % 10 == 0)
		{
			printf("1 ~ %d = %d\n", i, sum);
		}
	}
	return 0;
}
#include <stdio.h>

int main()
{
	register int i;
	long sum = 0;
	for (i = 1; i <= 20000; i++)
	{
		sum+=i;
	}
	printf("1부터 20000까지의 합은 %ld입니다\n", sum);
	return 0;
}
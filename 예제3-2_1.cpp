#include <stdio.h>

int main()
{
	char i;
	for (i = 100; i > 10; i--)
	{
		printf("i = %d\n", i);
	}

	char j;
	for (j = 0; j < 200; j++)
	{
		printf("i = %d\n", i);
	}
	return 0;
}

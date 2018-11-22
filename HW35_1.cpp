/*작성자 : 이재빈 Hw35_1*/
#include <stdio.h>

int main()
{
	int i;
	printf("(실행 예)\n");
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d ", i);
			if (i % 10 == 0)
				printf("\n");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf( "* ");
			if (i % 10 == 0)
				printf("\n");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf(" # ");
			if (i % 10 == 0)
				printf("\n");
			continue;
		}
		printf("%2d ", i);
	}
	printf("\n");
	return 0;
}
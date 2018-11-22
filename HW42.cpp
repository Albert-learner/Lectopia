/*작성자 : 이재빈 HW42*/
#include <stdio.h>

int main()
{
	int i, j, k;
	printf("(출력 예)\n");
	printf("<2중 for문을 이용한 출력>\n");
	
	for (i = 1; i < 10; i++)
	{
		for (j = 2; j < 6; j++)
		{
			printf("%d*%d= %d\t\t", j, i, j*i);
		}
		printf("\n");
	}
	printf("\n\n");

	for (i = 1; i < 10; i++)
	{
		for (j = 6; j < 10; j++)
		{
			printf("%d*%d=%d\t\t", j, i, j*i);
		}
		printf("\n");
	}
	printf("\n");
	printf("---------------------------------------------------------\n\n");
	printf("<3중 for문을 이용한 출력>\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 1; j < 10; j++)
		{
			for (k = 2; k < 6; k++)
			{
				printf("%d*%d=%d\t\t", k + i * 4, j, (k + i * 4)*j);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
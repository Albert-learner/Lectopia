/*�ۼ��� : ����� HW42*/
#include <stdio.h>

int main()
{
	int i, j, k;
	printf("(��� ��)\n");
	printf("<2�� for���� �̿��� ���>\n");
	
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
	printf("<3�� for���� �̿��� ���>\n");
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
/*�ۼ��� : ����� HW40*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	int line, res;
	printf("(����� ��)\n");
	while (1)
	{
		printf("# ��� ���μ��� �Է��Ͻÿ� : ");
		res = scanf("%d", &line);

		if (res == 0)
			exit(1);

		for (i = 0; i < line; i++)
		{
			for (j = 0; j <= i; j++)
			{
				printf("*");
			}

			for (j = i; j < 2 * line - i; j++)
			{
				printf(" ");
			}

			for (j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
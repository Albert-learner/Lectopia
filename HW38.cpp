/*�ۼ��� : ����� HW38*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

void myflush();

int main()
{
	int res, cost;
	int cream = 500, shrimp = 700, coke = 400;
	printf("(����� ��)\n");
	
	while (1)
	{
		printf("���� ����� ���� �ݾ� �Է� : ");
		res = scanf("%d", &cost);
		if (res == 0)
		{
			exit(1);
		}

		cost -= 1600;
		if (cost == 0)
		{
			printf("ũ����(%d��), �����(%d����), �ݶ�(%d��)\n", 1, 1, 1);
		}
		else
		{
			for (int i = 0 ; i <=cost/cream;i++)
			{
				for (int j = 0; j <= cost/coke; j++)
				{
					for (int k = 0; k <= cost/shrimp; k++)
					{
						if (cost == k * shrimp + i * cream + j * coke)
						{
							printf("ũ����(%d ��), �����(%d ����), �ݶ�(%d ��)\n", 1 + i, 1 + k, 1 + j);
						}
					}
				}
			}
		}
		printf("��� �����Ͻðڽ��ϱ�?\n");
	}
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
		;
}
/*작성자 : 이재빈 HW38*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

void myflush();

int main()
{
	int res, cost;
	int cream = 500, shrimp = 700, coke = 400;
	printf("(입출력 예)\n");
	
	while (1)
	{
		printf("현재 당신의 소유 금액 입력 : ");
		res = scanf("%d", &cost);
		if (res == 0)
		{
			exit(1);
		}

		cost -= 1600;
		if (cost == 0)
		{
			printf("크림빵(%d개), 새우깡(%d봉지), 콜라(%d병)\n", 1, 1, 1);
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
							printf("크림빵(%d 개), 새우깡(%d 봉지), 콜라(%d 병)\n", 1 + i, 1 + k, 1 + j);
						}
					}
				}
			}
		}
		printf("어떻게 구입하시겠습니까?\n");
	}
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
		;
}
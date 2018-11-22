/*작성자 : 이재빈 HW27*/
#pragma warning (disable : 4996)
#include <stdio.h>

void myflush();
int input();

int main()
{
	int oval_w, oval_c = 0;

	while (1)
	{
		oval_w = input();

		if (oval_w >= 150 && oval_w <= 500)
		{
			oval_c++;
			printf("* 현재 달걀의 수 : %d\n", oval_c);
		}
		else if (oval_w < 150)
		{
			printf("메추리알 가지고 장난하지 마시오~ ^^\n");
		}
		else
		{
			printf("타조알 가지고 장난하지 마시오~ ^^\n");
		}

		if (oval_c == 10)
		{
			printf("\n\n");
			printf("*** 달걀 포장이 끝났습니다.\n");
			break;
		}
	}
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
		;
}

int input()
{
	int weight, res;
	while (1)
	{
		printf("# 계란의 무게를 입력하세요(단위 : g) : ");
		res = scanf("%d", &weight);

		if (res != 1)
			myflush();
		else
		{
			break;
		}
	}
	return weight;
}
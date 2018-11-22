/*작성자 : 이재빈 HW34*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

void myflush();
int input(const char *msg);
int calculate(int code, int amount);
void output(int code, int amount, int total);

int main()
{
	int user_c, user_a, user_t;
	printf("(입출력 예)\n");

	while (1)
	{
		user_c = input("* 사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) : ");
		if (1 <= user_c && user_c <= 3)
		{
			break;
		}
		else
		{
			myflush();
		}
	}

	while (1)
	{
		user_a = input("* 사용량을 입력하시오(ton단위) : ");
		if (user_a >= 0)
		{
			break;
		}
		else
		{
			myflush();
		}
	}

	user_t=calculate(user_c, user_a);
	output(user_c, user_a, user_t);
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
		;
}

int input(const char *msg)
{
	int cost;
	
	if (!strcmp(msg, "* 사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) : "))
	{
		printf(msg);
		scanf("%d", &cost);
	}
	else
	{
		printf(msg);
		scanf("%d", &cost);
	}
	return cost;
}

int calculate(int code, int amount)
{
	double tax;
	int spend, total;
	char ans[10];
	
	if (code == 1)
	{
		strcpy(ans, "가정용");
		spend = amount * 50;
	}
	else if (code == 2)
	{
		strcpy(ans, "상업용");
		spend = amount * 45;
	}
	else
	{
		strcpy(ans, "공업용");
		spend = amount * 30;
	}

	tax = spend * 0.05;
	total = spend + tax;

	return total;
}

void output(int code, int amount, int total)
{
	char str[10];

	switch (code)
	{
	case 1:
		strcpy(str, "가정용");
		break;
	case 2:
		strcpy(str, "상업용");
		break;
	case 3:
		strcpy(str, "공업용");
		break;
	}

	printf("\n\n");
	printf("# 사용자코드 : %d(%s)\n", code, str);
	printf("# 사용량 : %d ton\n", amount);
	printf("# 총수도요금 : %d원\n", total);
}
/*작성자 : 이재빈 HW31*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

void myflush();
char menu();
int inputInt(const char *msg);
int deposit(int bal);
int withdraw(int bal);

int main()
{
	int bal = 0;
	char menu_bar;

	printf("(실행 예)\n");
	printf("현재 잔액은 %d원 입니다.\n", bal);

	while (1)
	{
		menu_bar = menu();

		if (menu_bar == 'i')
		{
			bal = deposit(bal);
			printf("* 현재 잔액은 %d원 입니다.\n\n\n", bal);
		}
		else if (menu_bar == 'o')
		{
			bal = withdraw(bal);
			printf("* 현재 잔액은 %d원 입니다.\n\n\n", bal);
		}
		else
		{
			break;
		}
		myflush();
	}
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}

char menu()
{
	char ch;
	while (1)
	{
		printf("# 메뉴를 선택하시오(i-입금, o-출금, q-종료) : ");
		scanf("%c", &ch);

		if (ch == 'i' || ch == 'o' || ch == 'q')
		{
			break;
		}
		else
		{
			myflush();
			printf("* 잘못 입력하셨습니다.\n\n");
		}
	}
	return ch;
}

int inputInt(const char *msg)
{
	int cost, res;

	if (!strcmp(msg, "# 입금액을 입력하세요 : "))
	{
		printf(msg);
		
		while (1)
		{
			res = scanf("%d", &cost);
			if (res != 1)
			{
				myflush();
				printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
			}
			else
			{
				if (cost < 0)
				{
					myflush();
					printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
				}
				else
				{
					break;
				}
			}
		}
	}
	else
	{
		printf(msg);

		while (1)
		{
			res = scanf("%d", &cost);
			if (res != 1)
			{
				myflush();
				printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
			}
			else
			{
				if (cost < 0)
				{
					myflush();
					printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
				}
				else
				{
					break;
				}
			}
		}
	}
	return cost;
}

int deposit(int cost)
{
	int money;
	money = inputInt("# 입금액을 입력하세요 : ");
	money += cost;
	return money;
}

int withdraw(int cost)
{
	int money;
	money = inputInt("# 출금액을 입력하세요 : ");

	if (money > cost)
	{
		printf("* 잔액이 부족합니다.\n");
		return cost;
	}
	else
	{
		money = cost - money;
		return money;
	}
}
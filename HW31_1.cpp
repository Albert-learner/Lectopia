/*작성자 : 이재빈 HW31*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void myflush();
char menu();
int inputInt(const char *msg);
void deposit(int cost);
void withdraw(int cost);

int main()
{
	char menu_bar;
	int i_o_cost=0;
	printf("(실행 예)\n");
	printf("* 현재 잔액은 %d원 입니다.\n", i_o_cost);

	while (1)
	{
		menu_bar = menu();
		if (menu_bar == 'i')
		{
			i_o_cost += inputInt("# 입금액을 입력하세요 : ");

			if (i_o_cost < 0)
			{
				while (1)
				{
					printf("잘못 입력하셨습니다. 다시 입력하십시오 : ");
					i_o_cost += inputInt("# 입금액을 입력하세요 : ");

					if (i_o_cost >= 0)
					{
						break;
					}
					else
					{
						continue;
					}
				}
			}
			else
			{
				deposit(i_o_cost);
			}
		}
		else if (menu_bar == 'o')
		{
			i_o_cost -= inputInt("# 출금액을 입력하세요 : ");

			if (i_o_cost < 0)
			{
				while (1)
				{
					printf("잘못 입력하셨습니다. 다시 입력하십시오 : ");
					i_o_cost -= inputInt("# 출금액을 입력하세요 : ");

					if (i_o_cost >= 0)
					{
						break;
					}
					else
					{
						continue;
					}
				}
			}
			else
			{
				withdraw(i_o_cost);
			}
		}
		else
		{
			inputInt("종료 \n");
			break;
		}
		printf("\n\n");
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

		if (ch != 'i' && ch != 'o' && ch != 'q')
		{
			printf("잘못 입력하셨습니다.\n");
			myflush();
		}
		else if (ch == 'i' || ch == 'o' || ch == 'q')
		{
			break;
		}
		else
		{
			;
		}
	}
	return ch;
}

int inputInt(const char *msg)
{
	int cost=0, in_out_cost, res;
	
	if (!strcmp(msg, "# 입금액을 입력하세요 : "))
	{
		printf(msg);
		res = scanf("%d", &in_out_cost);
		
		if (res != 1)
		{
			while (1)
			{
				printf("잘못 입력하셨습니다. 다시 입력하십시오 :");
				myflush();
				res = scanf("%d", &in_out_cost);

				if (res == 1)
				{
					break;
				}
				else
				{
					continue;
				}
			}
		}
		else
		{
			cost += in_out_cost;
		}
	}

	else if (!strcmp(msg, "# 출금액을 입력하세요 : "))
	{
		printf(msg);
		res = scanf("%d", &in_out_cost);

		if (res != 1)
		{
			while (1)
			{
				printf("잘못 입력하셨습니다. 다시 입력하십시오 : ");
				myflush();
				res = scanf("%d", &in_out_cost);

				if (res == 1)
				{
					break;
				}
				else
				{
					continue;
				}
			}
		}
		else
		{
			cost += in_out_cost;
		}
	}

	else
	{
		exit(1);
	}

	return cost;
}

void deposit(int cost)
{
	if (cost >= 0)
	{
		printf("현재 잔액은 %d원 입니다.\n", cost);
	}
	else
	{
		printf("잘못 입력하셨습니다. 다시 입력하십시오 : ");
	}
}

void withdraw(int cost)
{
	if (cost >= 0)
	{
		printf("현재 잔액은 %d원 입니다.\n", cost);
	}
	else
	{
		printf("현재 잔액은 %d원 입니다.\n", cost);
	}
}
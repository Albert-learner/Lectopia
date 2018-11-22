/*�ۼ��� : ����� HW31*/
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

	printf("(���� ��)\n");
	printf("���� �ܾ��� %d�� �Դϴ�.\n", bal);

	while (1)
	{
		menu_bar = menu();

		if (menu_bar == 'i')
		{
			bal = deposit(bal);
			printf("* ���� �ܾ��� %d�� �Դϴ�.\n\n\n", bal);
		}
		else if (menu_bar == 'o')
		{
			bal = withdraw(bal);
			printf("* ���� �ܾ��� %d�� �Դϴ�.\n\n\n", bal);
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
		printf("# �޴��� �����Ͻÿ�(i-�Ա�, o-���, q-����) : ");
		scanf("%c", &ch);

		if (ch == 'i' || ch == 'o' || ch == 'q')
		{
			break;
		}
		else
		{
			myflush();
			printf("* �߸� �Է��ϼ̽��ϴ�.\n\n");
		}
	}
	return ch;
}

int inputInt(const char *msg)
{
	int cost, res;

	if (!strcmp(msg, "# �Աݾ��� �Է��ϼ��� : "))
	{
		printf(msg);
		
		while (1)
		{
			res = scanf("%d", &cost);
			if (res != 1)
			{
				myflush();
				printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
			}
			else
			{
				if (cost < 0)
				{
					myflush();
					printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
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
				printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
			}
			else
			{
				if (cost < 0)
				{
					myflush();
					printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
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
	money = inputInt("# �Աݾ��� �Է��ϼ��� : ");
	money += cost;
	return money;
}

int withdraw(int cost)
{
	int money;
	money = inputInt("# ��ݾ��� �Է��ϼ��� : ");

	if (money > cost)
	{
		printf("* �ܾ��� �����մϴ�.\n");
		return cost;
	}
	else
	{
		money = cost - money;
		return money;
	}
}
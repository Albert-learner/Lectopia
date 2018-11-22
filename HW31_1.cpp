/*�ۼ��� : ����� HW31*/
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
	printf("(���� ��)\n");
	printf("* ���� �ܾ��� %d�� �Դϴ�.\n", i_o_cost);

	while (1)
	{
		menu_bar = menu();
		if (menu_bar == 'i')
		{
			i_o_cost += inputInt("# �Աݾ��� �Է��ϼ��� : ");

			if (i_o_cost < 0)
			{
				while (1)
				{
					printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
					i_o_cost += inputInt("# �Աݾ��� �Է��ϼ��� : ");

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
			i_o_cost -= inputInt("# ��ݾ��� �Է��ϼ��� : ");

			if (i_o_cost < 0)
			{
				while (1)
				{
					printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
					i_o_cost -= inputInt("# ��ݾ��� �Է��ϼ��� : ");

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
			inputInt("���� \n");
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
		printf("# �޴��� �����Ͻÿ�(i-�Ա�, o-���, q-����) : ");
		scanf("%c", &ch);

		if (ch != 'i' && ch != 'o' && ch != 'q')
		{
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
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
	
	if (!strcmp(msg, "# �Աݾ��� �Է��ϼ��� : "))
	{
		printf(msg);
		res = scanf("%d", &in_out_cost);
		
		if (res != 1)
		{
			while (1)
			{
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� :");
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

	else if (!strcmp(msg, "# ��ݾ��� �Է��ϼ��� : "))
	{
		printf(msg);
		res = scanf("%d", &in_out_cost);

		if (res != 1)
		{
			while (1)
			{
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
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
		printf("���� �ܾ��� %d�� �Դϴ�.\n", cost);
	}
	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
	}
}

void withdraw(int cost)
{
	if (cost >= 0)
	{
		printf("���� �ܾ��� %d�� �Դϴ�.\n", cost);
	}
	else
	{
		printf("���� �ܾ��� %d�� �Դϴ�.\n", cost);
	}
}
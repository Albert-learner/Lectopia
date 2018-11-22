/*�ۼ��� : ����� HW34*/
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
	printf("(����� ��)\n");

	while (1)
	{
		user_c = input("* ����� �ڵ带 �Է��Ͻÿ�(1:������/2:�����/3:������) : ");
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
		user_a = input("* ��뷮�� �Է��Ͻÿ�(ton����) : ");
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
	
	if (!strcmp(msg, "* ����� �ڵ带 �Է��Ͻÿ�(1:������/2:�����/3:������) : "))
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
		strcpy(ans, "������");
		spend = amount * 50;
	}
	else if (code == 2)
	{
		strcpy(ans, "�����");
		spend = amount * 45;
	}
	else
	{
		strcpy(ans, "������");
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
		strcpy(str, "������");
		break;
	case 2:
		strcpy(str, "�����");
		break;
	case 3:
		strcpy(str, "������");
		break;
	}

	printf("\n\n");
	printf("# ������ڵ� : %d(%s)\n", code, str);
	printf("# ��뷮 : %d ton\n", amount);
	printf("# �Ѽ������ : %d��\n", total);
}
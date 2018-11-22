/*�ۼ��� : ����� HW32*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

int inputUInt(const char *);
double inputDouble(const char *);
int ipow(int num, int p);
double fpow(double fnum, int p);

int main()
{
	int i_b, i_p, d_p, ans_1;
	double d_b, ans_2;
	printf("(���� ��)\n");

	i_b = inputUInt("* ���� ���� ���� �Է� �Ͻÿ� : ");
	i_p = inputUInt("* ���� ���� �Է� �Ͻÿ� : ");
	ans_1=ipow(i_b, i_p);
	printf("%d�� %d���� %d�Դϴ�.\n\n", i_b, i_p, ans_1);

	d_b = inputDouble("* ���� �Ǽ� ���� �Է� �Ͻÿ� : ");
	d_p = inputDouble("* ���� ���� �Է� �Ͻÿ� : ");
	ans_2 = fpow(d_b, d_p);
	printf("%.2lf�� %d���� %.3lf �Դϴ�.\n", d_b, d_p, ans_2);
	return 0;
}

int inputUInt(const char *msg)
{
	int base, pow;
	if (!strcmp(msg, "* ���� ���� ���� �Է� �Ͻÿ� : "))
	{
		printf(msg);
		scanf("%d", &base);

		if (base == 0)
		{
			return base;
		}
		return base;
	}
	else
	{
		printf(msg);
		scanf("%d", &pow);

		if (pow == 0)
		{
			return 1;
		}
		return pow;
	}
}

double inputDouble(const char *msg)
{
	double base;
	int pow;
	if (!strcmp(msg, "* ���� �Ǽ� ���� �Է� �Ͻÿ� : "))
	{
		printf(msg);
		scanf("%lf", &base);

		if (base == 0.0)
		{
			return 0.0;
		}
		return base;
	}
	else
	{
		printf(msg);
		scanf("%d", &pow);

		if (pow == 0)
		{
			return 1;
		}
		else
		{
			return pow;
		}
	}
}

int ipow(int num, int p)
{
	int cost=1;

	for (int i = 0; i < p; i++)
	{
		cost *= num;
	}
	return cost;
}

double fpow(double fnum, int p)
{
	double cost = 1.0;

	for (int i = 0; i < p; i++)
	{
		cost *= fnum;
	}
	return cost;
}
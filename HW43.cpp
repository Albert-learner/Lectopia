/*�ۼ��� : ����� HW43*/
#pragma warning (disable :4996)
#include <stdio.h>

int input();
int primeNumber(int num);

int main()
{
	int cost, i, prim_cnt=0;
	printf("(����� ��)\n");
	
	cost = input();
	
	printf("1~%d������ �Ҽ� ���� ������ �����ϴ�.\n", cost);
	for (i = 1; i <= cost; i++)
	{
		if (primeNumber(i) == 1)
		{
			printf("%-5d", i);
			prim_cnt++;
		}
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
	printf("1~%d������ �� �Ҽ��� %d�� �Դϴ�.\n", prim_cnt);
	return 0;
}

int input()
{
	int num;
	printf("*������ �ϳ��� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	
	return num;
}

int primeNumber(int num)
{
	int i, last=num/2;

	if (num <= 1)
	{
		return 0;
	}

	for (i = 1; i <= last; i++)
	{
		if ((num%i) == 0)
		{
			return 0;
		}
	}
	return 1;
}

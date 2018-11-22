/*작성자 : 이재빈 HW43*/
#pragma warning (disable :4996)
#include <stdio.h>

int input();
int primeNumber(int num);

int main()
{
	int cost, i, prim_cnt=0;
	printf("(입출력 예)\n");
	
	cost = input();
	
	printf("1~%d까지의 소수 값은 다음과 같습니다.\n", cost);
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
	printf("1~%d까지의 총 소수는 %d개 입니다.\n", prim_cnt);
	return 0;
}

int input()
{
	int num;
	printf("*정수값 하나를 입력하시오 : ");
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

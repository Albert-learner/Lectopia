/*작성자 : 이재빈 HW29*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void myflush();
int input(const char *msg);
int transNumber(int num);
void output(int start, int last, int consist);

int main()
{
	int start, last, consist;
	start = input("시작 값(P1) : ");
	last = input("끝 값(P2) : ");
	consist = input("고집수(N) : ");

	printf("고집수가 %d인 숫자 출력\n", consist);
	output(start, last, consist);
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
		;
}

int input(const char *msg)
{
	int cost, res;
	
	while (1)
	{
		if (!strcmp(msg, "시작 값(P1) : "))
		{
			printf(msg);
		}
		else if (!strcmp(msg, "끝 값(P2) : "))
		{
			printf(msg);
		}
		else
		{
			printf(msg);
		}
		res = scanf("%d", &cost);

		if (res == 0)
		{
			exit(1);
		}

		if (cost < 0)
		{
			myflush();
		}
		else
		{
			break;
		}
	}
	return cost;
}

int transNumber(int num)
{
	int tran = 1, quot, rest;

	quot = num / 10;
	rest = num % 10;
	tran *= rest;

	if (quot <= 10)
	{
		tran *= quot;
	}
	else
	{
		while (quot > 10)
		{
			rest = quot % 10;
			quot /= 10;
			tran *= rest;
		}
		tran *= quot;
	}
	return tran;
}

void output(int start, int last, int consist)
{
	int i, answer, total=0, cnt;
	for (i = start; i <= last; i++)
	{
		cnt = 0;
		answer = transNumber(i);
		cnt++;

		while (cnt != 5)
		{
			answer = transNumber(answer);
			cnt++;

			if (answer >= 0 && answer <= 9)
			{
				break;
			}
		}

		if (cnt == 5)
		{
			if (answer >= 0 && answer <= 9)
			{
				printf("%d\n", i);
				total++;
			}
		}
		else
		{
			continue;
		}
	}
	printf("총 개수 : %d개\n", total);
}
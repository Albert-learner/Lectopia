/*작성자 : 이재빈 HW54*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

int power(int cost, int pow);
void str_input(char *cp);
int num_calc(char *cp, int length);
void output(char *cp, int cost);

int main()
{
	char str[100] = {'\0'};
	int len, num_sum;
	printf("(실행 예)\n");
	
	while (1)
	{
		str_input(str);

		if (!strcmp(str, "end"))
		{
			break;
		}
		else
		{
			len = strlen(str);
			num_sum=num_calc(str, len);
			output(str, num_sum);
		}
	}
	return 0;
}

int power(int cost, int pow)
{
	int i, mul=1;
	for (i = 0; i < pow; i++)
	{
		mul *= cost;
	}
	return mul;
}

void str_input(char *cp)
{
	printf("# 문장을 입력하시오 : ");
	scanf("%s", cp);
}

int num_calc(char *cp, int length)
{
	int i, j=0, sum=0, total_sum=0;

	for (i = length - 1; i >= 0; i--)
	{
		if (0 <= cp[i] - '0' && cp[i] - '0' <= 9)
		{
			sum = 0;
			sum += (cp[i] - '0')*power(10, j);
			total_sum += sum;
			j++;
		}
		else
		{
			sum = 0, j = 0;
			continue;
		}
	}
	return total_sum;
}

void output(char *cp, int cost)
{
	printf("\"%s\" 내의 총 숫자는 [%d]입니다.\n\n", cp, cost);
}
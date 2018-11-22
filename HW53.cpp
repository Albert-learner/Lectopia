/*작성자 : 이재빈 HW53*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void str_input(char *cp);
int pal_check(char *cp, int length);
void output(char *cp, int confirm);

int main()
{
	int len, conf, res;
	char str[20] = {'\0'};
	printf("(실행 예)\n");

	while (1)
	{
		str_input(str);
		len = strlen(str);
		conf = pal_check(str, len);

		if (!strcmp(str, "end"))
		{
			break;
		}
		else
		{
			;
		}
		output(str, conf);
	}
	return 0;
}

void str_input(char *cp)
{
	printf("# 단어 입력 : ");
	scanf("%s", cp);
}

int pal_check(char *cp, int length)
{
	int i, ans;

	for (i = 0; i < length; i++)
	{
		if (isupper(cp[i]))
		{
			cp[i] = tolower(cp[i]);
		}
		else
		{
			;
		}
	}

	for (i = 0; i < length / 2; i++)
	{
		if (cp[i] == cp[length - i - 1])
		{
			ans = 1;
		}
		else
		{
			ans = 0;
		}
	}
	return ans;
}

void output(char *cp, int confirm)
{
	if (confirm == 1)
	{
		printf("\"%s\" : 회문입니다!\n\n", cp);
	}
	else
	{
		printf("\"%s\" : 회문이 아닙니다!\n\n", cp);
	}
}
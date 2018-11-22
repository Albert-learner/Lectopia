/*작성자 : 이재빈 HW57*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

void myflush();
void str_input(char (*cp)[20]);
void output(char(*cp)[20]);

int main()
{
	char str[5][20] = {'\0'};
	printf("(입력 예)\n");
	str_input(str);
	printf("\n");
	output(str);
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}

void str_input(char(*cp)[20])
{
	int i;
	
	for (i = 0; i < 5; i++)
	{
		printf("%d번 문자열을 입력하시오 : ", i+1);
		scanf("%s", cp[i]);
	}
	myflush();
}

void output(char(*cp)[20])
{
	int i, j, len;
	char last;

	printf("(출력 예)\n");
	for (i = 0; i < 5; i++)
	{
		printf("str[%d] = %s   %c   ", i, cp[i], cp[i][0]);
		len = strlen(cp[i]);
		printf("%c\n", cp[i][len - 1]);
	}
}
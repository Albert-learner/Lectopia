/*�ۼ��� : ����� HW41*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

void myflush();

int main()
{
	int i, j;
	char ch;

	while (1)
	{
		printf("* ������ �빮�� �Է�('A' ~ 'Z') : ");
		scanf("%c", &ch);

		if (ch<'A' || ch>'Z')
		{
			break;
		}

		printf("\n");
		for (i = 0; i <= ch - 'A'; i++)
		{
			for (j = 0; j <= i; j++)
			{
				printf("%c", ch - j);
			}
			printf("\n");
		}
		myflush();
	}
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
		;
}
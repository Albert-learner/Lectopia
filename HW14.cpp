/*�ۼ��� : ����� HW14*/
#include <stdio.h>
#include <string.h>

int main()
{
	char str[10];
	int i, j;
	printf("(����� ��)\n");
	for (i = 0; i < 4; i++)
	{
		printf("* ���ڿ� �Է� : ");
		scanf("%s", str);
		int big = strlen(str) / 2;
		printf("[");
		printf("%*s", big, " ");
		for (j= 0; j < big; j++)
			printf("%c", str[j]);
		printf("...]\n");

	}
	return 0;
}
/*작성자 : 이재빈 HW14*/
#include <stdio.h>
#include <string.h>

int main()
{
	char str[10];
	int i, j;
	printf("(입출력 예)\n");
	for (i = 0; i < 4; i++)
	{
		printf("* 문자열 입력 : ");
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
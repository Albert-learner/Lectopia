#include <stdio.h>

void string_print(char (*)[6], int);

int main()
{
	char str[3][6] = { "Year", "Month", "Day" };
	int row;
	row = sizeof(str) / sizeof(str[0]);
	//str[1][5] = '#';
	string_print(str, row);
	return 0;
}

void string_print(char (*cp)[6], int row)
{
	int i;

	for (i = 0; i < row; i++)
	{
		printf("%d행의 문자열은 %s이고, 첫 글자는 %c입니다\n", i, &cp[i][0], cp[i][0]);
	}
	return ;
}
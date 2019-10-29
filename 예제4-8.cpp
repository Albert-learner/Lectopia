#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int num, res;
	char ch, str[20];
	printf("input number, character, string : ");
	res = scanf("%d %c %s", &num, &ch, str);
	printf("number : %d\t character : %c\t string : %s\n", num, ch, str);
	printf("res = %d\n", res);
	return 0;
}
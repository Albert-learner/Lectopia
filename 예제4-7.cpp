#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	char oneStr[20], twoStr[20];
	printf("input string : ");
	scanf("%s", oneStr);
	printf("input string : ");
	scanf("%s", twoStr);
	printf("oneStr : %s\n", oneStr);
	printf("twoStr : %s\n", twoStr);
	return 0;
}
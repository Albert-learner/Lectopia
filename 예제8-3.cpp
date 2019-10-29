#include <stdio.h>

int main()
{
	char str[8];
	char str1[8] = { 'P', 'r', 'o', 'g', 'r', 'a', 'm' };
	char str2[] = " Good !";
	str[0] = 'T';
	str[1] = 'u';
	str[2] = 'r';
	str[3] = 'b';
	str[4] = 'o';
	str[5] = '-';
	str[6] = 'C';
	str[7] = '\0';
	printf("str : %s\n", str);
	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);
	return 0;
}
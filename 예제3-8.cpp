#pragma warning (disable : 4477)
#include <stdio.h>

int main()
{
	char str[6] = "Apple";

	printf("%s\n", str);
	printf("%c\n", str[0]);
	printf("%c\n", str[3]);
	printf("%x\n", str);
	return 0;
}
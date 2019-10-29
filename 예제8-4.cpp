#include <stdio.h>

void string_print(char *, int);

int main()
{
	char str[] = "Dream";
	int size = sizeof(str) / sizeof(str[0]);
	string_print(str, size);
	return 0;
}

void string_print(char *cp, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("str[%d] : %p: %c: %s\n", i, &cp[i], cp[i], &cp[i]);
	}
	return ;
}
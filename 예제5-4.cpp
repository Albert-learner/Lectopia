#include <stdio.h>

int main()
{
	char ch = 'A';

	do 
	{
		putchar(ch++);
	} while (ch <= 'Z');
	printf("\n");
	return 0;
}
#include <stdio.h>

int i = 0;
void sub();

int main()
{
	sub();
	return 0;
}

void sub()
{
	printf("i = %d\n", ++i);
	sub();
}
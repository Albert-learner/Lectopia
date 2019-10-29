#include <stdio.h>

void exchange(int *, int *);

int main()
{
	int x = 5, y = 10;
	exchange(&x, &y);
	printf("x = %d\t y= %d\n", x, y);
	return 0;
}

void exchange(int *a, int *b)
{
	int temp;
	temp = *a; *a = *b; *b = temp;
	printf("a = %d\t b = %d\n", *a, *b);
}
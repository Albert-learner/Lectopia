#include <stdio.h>

int fact(int);

int main()
{
	int num = 5;
	printf("5! = %d\n", fact(num));
	return 0;
}

int fact(int x)
{
	printf("x = %2d\n", x);
	if (x == 1) return 1;
	else return x * fact(x - 1);
}
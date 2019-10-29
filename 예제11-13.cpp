#include <stdio.h>

int plus(int, int);

int main()
{
	int a = 10, b = 20;
	int res;

	int(*fptr)(int, int);
	fptr = plus;
	res = plus(a, b);
	printf("%d + %d = %d\n", a, b, res);
	return 0;
}

int plus(int x, int y)
{
	return (x + y);
}
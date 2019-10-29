#include <stdio.h>

void workover(int);
int reset(int);

int main()
{
	int a = 5;
	reset(a / 2);
	reset(a /= 2);
	a = reset(a / 2);
	workover(a);
	return 0;
}

void workover(int a)
{
	a = ((a*a) / (2 * a) + 4)*(a%a);
	printf("%d\n", a);
}

int reset(int a)
{
	a=(a < 2) ? 5 : 0;
	return a;
}
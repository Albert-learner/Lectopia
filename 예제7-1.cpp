#include <stdio.h>

double sumPrn(int, double);

int main()
{
	int a = 10;
	double b = 5.4;
	double res;
	res = sumPrn(a, b);
	printf("res = %lf\n", res);
	return 0;
}

double sumPrn(int x, double y)
{
	double num;
	printf("int : %d\t double : %lf\n", x, y);
	num = x + y;
	return num;
}
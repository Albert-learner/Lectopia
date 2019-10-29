#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int a, b, c;
	int res;
	res = scanf("%d:%d:%d", &a, &b, &c);
	printf("res = %d, a = %d, b = %d, c = %d\n", res, a, b, c);
	return 0;
}
#include <stdio.h>
#define MULTI(x, y) x*y

int main()
{
	int res;
	res = 10 / MULTI(2, 5);
	printf("%d\n", res);
	return 0;
}
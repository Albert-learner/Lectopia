#include <stdio.h>

int main()
{
	short x;
	unsigned short y;
	int res1, res2;
	char b = 128;
	x = y = -1;
	res1 = x * 3;
	res2 = y * 3;
	printf("b = %d\n", b);
	printf("res1 = %d\n", res1);
	printf("res2 = %d\n", res2);
	return 0;
}
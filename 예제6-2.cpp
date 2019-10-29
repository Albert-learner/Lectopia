#include <stdio.h>

int main()
{
	short num = 0x0f0f, res;
	res = ~num;
	printf("num = %#hx, res=%#hx\n", num, res);
	return 0;
}
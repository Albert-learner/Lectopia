#include <stdio.h>

int main()
{
	int x = 10, y = 010, z = 0x10;
	printf("x의 값 : %d %o %x\n", x, x, x);
	printf("y의 값 : %d %o %x\n", y, y, y);
	printf("z의 값 : %d %o %x\n", z, z, z);
	return 0;
}
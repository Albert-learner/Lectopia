#include <stdio.h>

int main()
{
	short x = -32767;
	unsigned short y = x; // unsigned�� �������� �������� �����ϸ�?
	printf("x = %hd\t y=%hu\n", x, y);
	printf("x = %hu\t y=%hd\n", x, y);
	return 0;
}
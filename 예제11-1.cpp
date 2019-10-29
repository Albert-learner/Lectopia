#include <stdio.h>

int main()
{
	int *ptr, num = 10;
	ptr = &num;
	*ptr += 4;
	printf("num = %d\t *ptr = %d\n", num, *ptr);
	return 0;
}
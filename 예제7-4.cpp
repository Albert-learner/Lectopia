#include <stdio.h>

void exchange(int, int);

int main()
{
	int x = 5, y = 10;
	exchange(x, y);
	printf("x = %d\t y = %d\n", x, y);
	return 0;
}

void exchange(int x, int y)
{
	int temp;
	temp = x; x = y; y = temp;
	printf("x = %d\t y = %d\n", x, y);
}
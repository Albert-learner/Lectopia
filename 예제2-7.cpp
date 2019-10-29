#include <stdio.h>

int main()
{
	int num = 10;
	while (num)
	{
		printf("%5d", num);
		num--;
	}
	return 0;
}
#include <stdio.h>

int main()
{
	int i = 0, k = 1;
	while (i++ < 8)
	{
		printf("k << %d = %d\n", i, k = k << 1);
	}
	return 0;
}
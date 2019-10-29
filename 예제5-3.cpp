#pragma warning (disable : 4473)
#include <stdio.h>

int main()
{
	int i, s;
	for (i = 1, s = 0; i <= 100; i += 2)
	{
		s += i;
	}
	printf("1 + 3 + 5 +... + 99 = %d\n");
	return 0;
}
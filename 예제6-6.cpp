#include <stdio.h>

int main()
{
	short res;
	res = 9 - 2 % 7 + 6;
	printf("9 - 2 %% 7 + 6 = %hd\n", res);
	return 0;
}
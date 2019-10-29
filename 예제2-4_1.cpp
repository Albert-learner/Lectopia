#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int indata, sum = 0;
	while (1)
	{
		scanf("%d", &indata);

		if (indata == 0) break;
		sum += indata;
	}
	printf("%d", sum);
	return 0;
}
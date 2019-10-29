#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int indata, sum = 0;
	scanf("%d", &indata);

	while (indata != 0)
	{
		sum = sum + indata;
		scanf("%d", &indata);
	}
	printf("%d", sum);
	return 0;
}
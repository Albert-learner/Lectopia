#include <stdio.h>

int main()
{
	register int i;
	long sum = 0;
	for (i = 1; i <= 20000; i++)
	{
		sum+=i;
	}
	printf("1���� 20000������ ���� %ld�Դϴ�\n", sum);
	return 0;
}
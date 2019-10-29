#include <stdio.h>

//sizeof연산자 배열 방의 크기 * 방의 개수
int main()
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int *ptr, i;
	ptr = ary;

	for (i = 0; i < 5; i++)
	{
		printf("%6d", ary[i]);
	}
	printf("\n\n");
	for (i = 0; i < 5; i++)
	{
		printf("%6d", *(ary + i));
	}
	printf("\n\n");
	for (i = 0; i < 5; i++)
	{
		printf("%6d", *(ptr + i));
	}
	printf("\n\n");
	for (i = 0; i < 5; i++)
	{
		printf("%6d", *(ary + i));
	}
	printf("\n\n");
	return 0;
}
#include <stdio.h>

int main()
{
	int a[3][2]=
	{ 
		{1, 2},
		{3, 4},
		{5, 6}
	};
	int i, j;

	for (i = 0; i < 3; i++) //행
	{
		printf("\n *(a+%d) : %p\t", i, *(a + i)); //a[i]와 같다
		for (j = 0; j < 2; j++) //열
		{
			printf("%5d", *(*(a+i)+j));
		}
	}
	printf("\n");
	return 0;
}
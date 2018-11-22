/*작성자 : 이재빈 HW39*/
#include <stdio.h>

int main()
{
	int i, j;
	printf("(출력 예)\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d ", j * 10+i);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
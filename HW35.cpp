/*작성자 : 이재빈 HW35*/
#pragma warning (disable : 4996)
#include <stdio.h>

void myflush();

int main()
{
	int num, i, sum=0;
	printf("(입출력)\n");

	for (i = 1; i < 6; )
	{
		printf("0보다 큰수를 입력하시오(%d 번째) : ", i);
		scanf("%d", &num);

		if (num <= 0)
			continue;
		sum += num;
		i++;
	}
	printf("입력된 값의 총 합 : %d\n", sum);
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
		;
}
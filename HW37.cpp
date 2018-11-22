/*작성자 : 이재빈 HW37*/
#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int work_day, t;
	printf("(입출력 예)\n");

	for (t = 0; t < 5; t++)
	{
		int i = 1, total = 0;
		printf("* 기사의 근무일수를 입력하시오 : ");
		scanf("%d", &work_day);

		printf("근무일 : %d일  /  ", work_day);
		while (work_day >= i)
		{
			total += i * i;
			work_day -= i;
			i++;
		}
		total += work_day * i;
		printf("총 금화 수 : %d개\n", total);
	}
	return 0;
}


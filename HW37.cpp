/*�ۼ��� : ����� HW37*/
#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int work_day, t;
	printf("(����� ��)\n");

	for (t = 0; t < 5; t++)
	{
		int i = 1, total = 0;
		printf("* ����� �ٹ��ϼ��� �Է��Ͻÿ� : ");
		scanf("%d", &work_day);

		printf("�ٹ��� : %d��  /  ", work_day);
		while (work_day >= i)
		{
			total += i * i;
			work_day -= i;
			i++;
		}
		total += work_day * i;
		printf("�� ��ȭ �� : %d��\n", total);
	}
	return 0;
}


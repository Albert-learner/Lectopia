/*�ۼ��� : ����� HW35*/
#pragma warning (disable : 4996)
#include <stdio.h>

void myflush();

int main()
{
	int num, i, sum=0;
	printf("(�����)\n");

	for (i = 1; i < 6; )
	{
		printf("0���� ū���� �Է��Ͻÿ�(%d ��°) : ", i);
		scanf("%d", &num);

		if (num <= 0)
			continue;
		sum += num;
		i++;
	}
	printf("�Էµ� ���� �� �� : %d\n", sum);
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
		;
}
/*�ۼ��� : ����� HW21*/
#include <stdio.h>

int main()
{
	printf("(����� ��)\n");
	int i;
	double student[6];
	double ans, sum=0.0;
	for (i = 0; i < 5; i++)
	{
		printf("%d�� �л��� Ű��? ", i+1);
		scanf("%lf", &student[i]);

		sum += student[i];
	}
	sum /= 5.0;
	ans = sum;
	printf("�ټ� ���� ��� Ű�� %.1lfcm�Դϴ�.\n", ans);
	return 0;
}
#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
#include <float.h>

int main()
{
	float a, b;
	printf("a = ");
	scanf("%f", &a);

	printf("b = ");
	scanf("%f", &b);

	printf("DBL_EPSILON = %.30lf\n", DBL_EPSILON);

	if (fabs(a - b) < DBL_EPSILON)
	{
		printf("�� ���� ���� ��!!\n");
	}
	else
	{
		printf("�� ���� �ٸ� ��!!\n");
	}
	return 0;
}
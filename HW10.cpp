/*������ : ����� HW10*/
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>

int main()
{
	int num1, num2;
	int sum, mul;
	double sub;
	printf("(����� ��)\n");
	printf("�ΰ��� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &num1, &num2);

	sum = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;

	printf("%d+%d = %d\n", num1, num2, sum);
	printf("%d-%d = %d\n", num1, num2, (int)sub);
	printf("%d*%d = %d\n", num1, num2, mul);
	printf("%d/%d = %0.2lf\n", num1, num2, (double)num1/(double)num2);
	return 0;
}
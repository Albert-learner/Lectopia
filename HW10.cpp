/*수강생 : 이재빈 HW10*/
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>

int main()
{
	int num1, num2;
	int sum, mul;
	double sub;
	printf("(입출력 예)\n");
	printf("두개의 정수를 입력하시오 : ");
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
/*수강생 : 이재빈 HW11*/
#include <stdio.h>

int main()
{
	int cost;
	printf("(입출력 예)\n");
	printf("ASCII code값을 입력하시오 : ");
	scanf("%d", &cost);

	printf("%d은 %c의 ASCII code 입니다.\n", cost, cost);
	return 0;
}
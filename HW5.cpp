/*작성자 : 이재빈 HW5*/
#include <stdio.h>

int main()
{
	int amount, basic=660;
	double cost, tax, final_cost;
	printf("(입출력 예)\n");
	printf("전기 사용량을 입력하세요(kw): ");
	scanf("%d", &amount);

	cost = basic + (amount*88.5);
	tax = cost * 0.09;
	final_cost = cost + tax;
	printf("전기 사용요금은 %f 원 입니다.\n", final_cost);
	return 0;
}
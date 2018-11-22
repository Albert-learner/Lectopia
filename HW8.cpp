/*작성자 : 이재빈 HW8*/
#include <stdio.h>

int main()
{
	int his, lit, ent;
	int sum;
	float avg;
	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d", &his, &lit, &ent);
	sum = his + lit + ent;
	avg = sum / 3.0;
	printf("총점은 %d이고, 평균은 %.2f입니다.\n", sum, avg);

	return 0;
}
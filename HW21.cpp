/*작성자 : 이재빈 HW21*/
#include <stdio.h>

int main()
{
	printf("(입출력 예)\n");
	int i;
	double student[6];
	double ans, sum=0.0;
	for (i = 0; i < 5; i++)
	{
		printf("%d번 학생의 키는? ", i+1);
		scanf("%lf", &student[i]);

		sum += student[i];
	}
	sum /= 5.0;
	ans = sum;
	printf("다섯 명의 평균 키는 %.1lfcm입니다.\n", ans);
	return 0;
}
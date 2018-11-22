/*작성자 : 이재빈 HW7*/
#include <stdio.h>

int main()
{
	double dis, vel, time, sec, rest;
	int hour, min, i;
	
	printf("(실행결과)\n");
	for (i = 0;i < 3; i++)
	{
		printf("* 거리를 입력하시오(km단위) : ");
		scanf("%lf", &dis);
		printf("* 시속을 입력하시오(km/h단위) : ");
		scanf_s("%lf", &vel);
		time = dis / vel;

		hour = time / 1;
		rest = time - hour;

		min = rest * 60 / 1;
		rest = rest * 60 - min;

		sec = rest * 60;

		printf("%.2lfkm = > %d시간 %d분 %.3lf 초 소요됨\n", dis, hour, min, sec);
		printf("\n\n");
	}
	return 0;
}
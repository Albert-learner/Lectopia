/*�ۼ��� : ����� HW7*/
#include <stdio.h>

int main()
{
	double dis, vel, time, sec, rest;
	int hour, min, i;
	
	printf("(������)\n");
	for (i = 0;i < 3; i++)
	{
		printf("* �Ÿ��� �Է��Ͻÿ�(km����) : ");
		scanf("%lf", &dis);
		printf("* �ü��� �Է��Ͻÿ�(km/h����) : ");
		scanf_s("%lf", &vel);
		time = dis / vel;

		hour = time / 1;
		rest = time - hour;

		min = rest * 60 / 1;
		rest = rest * 60 - min;

		sec = rest * 60;

		printf("%.2lfkm = > %d�ð� %d�� %.3lf �� �ҿ��\n", dis, hour, min, sec);
		printf("\n\n");
	}
	return 0;
}
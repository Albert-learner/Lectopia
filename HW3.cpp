/*�ۼ��� : ����� HW3*/
#include <stdio.h>

int main()
{
	int time=54321, rest_time;
	int hour, min, sec;

	if (time/3600>1)
	{
		hour = time / 3600;
		rest_time = time % 3600;
	}
	if (rest_time / 60 > 1)
	{
		min = rest_time / 60;
		rest_time %= 60;
	}
	sec = rest_time;

	printf("(������)\n");
	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.\n", time, hour, min, sec);
	return 0;
}
/*작성자 : 이재빈 HW4*/
#include <stdio.h>

int main()
{
	double year = 365.2422;
	double rest, sec;
	int day, hour, min;

	if (year > 365.0)
	{
		day = year / 1;
		rest = year - day;
	}
	if (rest * 24 > 0.0)
	{
		hour = rest*24 / 1;
		rest = rest * 24 - hour;
	}
	if (rest * 60 > 0.0)
	{
		min = rest*60 / 1;
		rest = rest*60-min;
	}
	sec = rest*60;
	printf("(실행결과)\n");
	printf("%0.4f일은 %d일 %d시간 %d분 %0.2f초입니다.\n", year, (int)day, (int)hour, (int)min, sec);
	return 0;
}
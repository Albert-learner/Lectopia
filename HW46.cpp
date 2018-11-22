/*작성자 : 이재빈 HW46*/
#pragma warning (disable : 4996)
#include <stdio.h>

void input(int *, int *, int *);
void myflush();
int yearCheck(int);
int conf_date(int *, int *, int *);
int calc_day(int *, int *, int *);
void output(int *, int *, int *, int t);

int main()
{
	int pre_year, pre_month, pre_day, total, t;
	printf("(입출력 예)\n");
	
	conf_date(&pre_year, &pre_month, &pre_day);
	total = calc_day(&pre_year, &pre_month, &pre_day);
	output(&pre_year, &pre_month, &pre_day, total);
	return 0;
}

void input(int *year, int *month, int *day)
{
	printf("* 년 월 일을 입력하시오 : ");
	scanf("%d %d %d", &*year, &*month, &*day);
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}

int yearCheck(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				return 1;
			else
				return 0;
		}
		else
			return true;
	}
	else
		return false;
}

int conf_date(int *year, int *month, int *day)
{
	while (1)
	{
		input(&*year, &*month, &*day);
		if (*day <= 0 || *day>31)
		{
			myflush();
		}
		else
		{
			if (*month <= 0 || *month>12)
			{
				myflush();
			}
			else
			{
				if (yearCheck(*year) == 1)
				{
					if (*month == 2)
					{
						if (*day > 29)
						{
							myflush();
						}
						else
						{
							break;
						}
					}
					else
					{
						break;
					}
				}
				else
				{
					if (*month == 2)
					{
						if (*day >= 29)
						{
							myflush();
						}
						else
						{
							break;
						}
					}
					else
					{
						break;
					}
				}
			}
		}
	}
	return 1;
}

int calc_day(int *year, int *month, int *day)
{
	int tmp, i, total_day=0;
	tmp = *year - 1;

	for (i = 1900; i < *year; i++)
	{
		if (yearCheck(i) == 1)
		{
			total_day += 366;
		}
		else
		{
			total_day += 365;
		}
	}

	for (i = 1; i < *month; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			total_day += 31;
		}
		else if (i == 2)
		{
			if (yearCheck(*year) == 1)
			{
				total_day += 29;
			}
			else
			{
				total_day += 28;
			}
		}
		else
		{
			total_day += 30;
		}
	}
	total_day += *day;

	return total_day;
}

void output(int *year, int *month, int *day, int total)
{
	printf("%d년 %d월 %d일은 ", *year, *month, *day);
	total %= 7;

	switch (total)
	{
	case 0:
		printf("일요일입니다.\n");
		break;
	case 1:
		printf("월요일입니다.\n");
		break;
	case 2:
		printf("화요일입니다.\n");
		break;
	case 3:
		printf("수요일입니다.\n");
		break;
	case 4:
		printf("목요일입니다.\n");
		break;
	case 5:
		printf("금요일입니다.\n");
		break;
	case 6:
		printf("토요일입니다.\n");
		break;
	}
}
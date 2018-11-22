/*작성자 : 이재빈 HW19*/
#include <stdio.h>

int input();
int yearCheck(int year);
void output(int year, bool i);

int main()
{
	int check_year, i;
	bool t_f_leap;

	printf("(입출력 예)\n");
	/*while (1)
	{
		check_year = input();
		t_f_leap = yearCheck(check_year);
		output(check_year, t_f_leap);
		
		if (check_year == 0)
			break;
		printf("\n\n");
	}*/
	for (i = 0; i < 2; i++)
	{
		check_year = input();
		t_f_leap = yearCheck(check_year);
		output(check_year, t_f_leap);
		printf("\n\n");
	}
	return 0;
}

int input()
{
	int year;
	printf("년도를 입력하시오 : ");
	scanf("%d", &year);
	return year;
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
	
	/*if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return true;
	else 
		return false;*/
}

void output(int year, bool i)
{
	if (i == 1)
		printf("%d년은 윤년(Leap year)입니다.\n", year);
	else
		printf("%d년은 평년(Common year)입니다.\n", year);
}
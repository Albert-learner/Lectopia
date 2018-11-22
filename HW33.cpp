/*작성자 : 이재빈 HW33*/
#pragma warning (disable : 4996)
#include <stdio.h>

void myflush();
int menu();
char openFan(unsigned char f);
char offFan(unsigned char f);
char reverseFan(unsigned char f);
void displayFan(unsigned char f);

int main()
{
	int menu_bar;
	unsigned char fan = 0;
	while (1)
	{
		menu_bar = menu();

		if (menu_bar == 1)
		{
			fan = openFan(fan);
			displayFan(fan);
		}
		else if (menu_bar == 2)
		{
			fan = offFan(fan);
			displayFan(fan);
		}
		else if(menu_bar == 3)
		{
			fan = reverseFan(fan);
			displayFan(fan);
		}
		else
		{
			break;
		}
	}
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}

int menu()
{
	int choice, res;

	while (1)
	{
		printf("1. 환풍구 열기 / 2. 환풍구 닫기 / 3. 환풍구 전체 전환 / 4. 종료 : ");
		res = scanf("%d", &choice);

		if (res != 1)
		{
			myflush();
		}
		else
		{
			if (choice < 1 || choice>4)
			{
				myflush();
			}
			else
			{
				break;
			}
		}
	}
	return choice;
}

char openFan(unsigned char fan)
{
	int pos, i, res;
	char bit = 1;

	while (1)
	{
		printf("----------------------------------------------------------------\n");
		printf("* open할 fan 번호를 입력하시오(1~8) : ");
		res = scanf("%d", &pos);

		if (res != 1)
		{
			myflush();
		}
		else
		{
			if (pos < 1 || pos>8)
			{
				myflush();
			}
			else
			{
				break;
			}
		}
	}
	
	for (i = 0; i < 8-pos; i++)
	{
		bit <<= 1;
	}
	fan = fan | bit;
	return fan;
}

char offFan(unsigned char fan)
{
	int i, pos, res;
	char bit = 1;

	while (1)
	{
		printf("-------------------------------------------------------------------\n");
		printf("* close할 fan 번호를 입력하시오(1~8) : ");
		res = scanf("%d", &pos);

		if (res != 1)
		{
			myflush();
		}
		else
		{
			if (pos < 1 || pos>8)
			{
				myflush();
			}
			else
			{
				break;
			}
		}
	}
	
	if (fan == 0)
	{
		return fan;
	}
	else
	{
		for (i = 0; i < 8 - pos; i++)
		{
			bit <<= 1;
		}
		bit = ~bit;
		fan = fan & bit;
	}
	return fan;
}

char reverseFan(unsigned char fan)
{
	fan = ~fan;
	return fan;
}

void displayFan(unsigned char fan)
{
	int i;
	char bit, cri=1;

	printf("------------------------------------------------------------------\n");
	for (i = 8; i >= 1; i--)
	{
		printf("%d번fan  ", i);
	}
	printf("\n");
	
	for (i = 0; i < 8; i++)
	{
		bit = (cri & fan) ? 1 : 0;
		if (bit == 1)
		{
			printf("%4s\t", "ON");
		}
		else
		{
			printf("%4s\t", "OFF");
		}
		cri <<= 1;
	}
	printf("\n");
}

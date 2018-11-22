/*작성자 : 이재빈 HW24*/
#include <stdio.h>

int input();
int escape_date(int depth);
void output(int depth, int period);

int main()
{
	int dep, d_day, i;
	printf("(입출력 예)\n");
	for (i = 0; i < 2; i++)
	{
		dep = input();
		d_day = escape_date(dep);
		output(dep, d_day);
		printf("\n\n");
	}
	return 0;
}

int input()
{
	int depth;
	printf("* 우물의 깊이를 입력하시오(cm단위) : ");
	scanf("%d", &depth);
	return depth;
}

int escape_date(int depth)
{
	int day=0, climb=50;
	
	if (depth == 0)
		return day;
	else
	{
		if (depth <= 50)
		{
			depth = 50;
			day = depth / 50;
		}

		else
		{
			while (climb < depth)
			{
				climb -= 20;
				climb += 50;
				day++;
				if (climb > depth)
				{
					day++;
					break;
				}
				else if (climb == depth)
				{
					day++;
					break;
				}
			}
		}
	}
	return day;
}

void output(int depth, int period)
{
	printf("  %.2lf 미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.\n", depth*0.01, period);
	return ;
}
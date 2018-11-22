/*수강생 : 이재빈 HW16*/
#include <stdio.h>

int input();
int cost(int station);
void print(int cost);

int main()
{
	int station, cost_stat, i;
	printf("(입출력 예)\n");
	for (i = 0; i < 5; i++)
	{
		station = input();
		cost_stat = cost(station);
		print(cost_stat);
	}
	return 0;
}

int input()
{
	int stat;
	printf("역수를 입력하시오 : ");
	scanf("%d", &stat);
	return stat;
}

int cost(int station)
{
	int cost;
	int quot, rest;
	if (station <= 5)
		cost = 600;
	else if (station <= 10)
		cost = 800;
	else
	{
		cost = 800;
		station -= 10;

		if (station <= 2)
			cost += 100;
		else
		{
			if (station % 2 == 0)
			{
				if (station != 4)
				{
					quot = station / 4;
					rest = station % 4;
					
					if (rest == 3)
					{
						cost += (quot + rest) * 200;
					}
					else
						cost += quot * 200 +  100;
				}
				else
					cost += 200;
			}
			else
			{
				if (station != 3)
				{
					quot = station / 3;
					rest = station % 3;
					cost += quot * 200 + 100 * rest;
				}
				else
					cost += 200;
			}
		}
	}
	return cost;
}

void print(int cost)
{
	printf("요금 : %d원\n", cost);
	return ;
}
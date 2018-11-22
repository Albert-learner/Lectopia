/*작성자 : 이재빈 HW64*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>

void arr_input(int *mp, int size);
int StrikeCheck(int *ip, int *mp, int size);
int BallCheck(int *ip, int *mp, int size);

int main()
{
	int i, j, rand_num, turn = 1, AI[4], cri, comp, strike, ball;
	int mine[4];

	srand((unsigned int)time(NULL));
	for (i = 0; i < 4; i++)
	{
		rand_num = rand() % 10;
		AI[i] = rand_num;
	}

	for (i = 0; i < 3; i++)
	{
		cri = AI[i];
		for (j = i + 1; j < 4; j++)
		{
			comp = AI[j];
			while (cri == comp)
			{
				comp  = rand() % 10;
				AI[j] = comp;
			}
		}
	}

	while (1)
	{
		printf("# %d차 : ", turn++);
		arr_input(mine, 4);

		strike = StrikeCheck(AI, mine, 4);
		ball = BallCheck(AI, mine, 4);

		if (strike == 4)
		{
			printf(" OK!!!\n");
			break;
		}
		else
		{
			if (strike == 0 && ball == 0)
			{
				printf(" No!\n");
			}
			else
			{
				printf("  %dS %dB\n", strike, ball);
			}
		}
	}
	return 0;
}

void arr_input(int *mp, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		mp[i] = getche()-'0';
		printf(" ");
		getche();
	}
}

int StrikeCheck(int *ip, int *mp, int size)
{
	int i, strike_cnt = 0;

	for (i = 0; i < size; i++)
	{
		if (ip[i] == mp[i])
		{
			strike_cnt++;
		}
		else
		{
			continue;
		}
	}
	return strike_cnt;
}

int BallCheck(int *ip, int *mp, int size)
{
	int i, j, ball_cnt = 0;
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (ip[i] == mp[j] && i != j)
			{
				ball_cnt++;
			}
			else
			{
				continue;
			}
		}
	}
	return ball_cnt;
}
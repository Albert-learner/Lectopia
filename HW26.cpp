/*작성자 : 이재빈 HW26*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define rock 1
#define scissor 2
#define paper 3

int input();
void output(int random, int what);

int main()
{
	int mine, rand_opp, win=0, same=0;
	char *ans;
	srand((unsigned int)time(NULL));
	printf("(입출력 예)\n");

	while (1)
	{
		mine = input();
		rand_opp = rand() % 3 + 1;
		output(rand_opp, mine);
		
		if (mine == rand_opp)
			same++;
		else
		{
			if (mine > rand_opp)
				break;
			else
			{
				if (mine == 1 && rand_opp == 3)
					break;
				win++;
			}
		}
	}
	printf("게임 결과 : %d승 %d무\n", win, same);
	return 0;
}

int input()
{
	int what;
	printf("# 바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
	scanf("%d", &what);

	if (what != 1 && what != 2 && what != 3)
	{
		printf("재 입력 : ");
		scanf("%d", &what);
	}
	return what;
}

void output(int random, int what)
{
	char wh[10], oppose[10];
	
	if (what == rock)
		strcpy(wh, "바위");
	else if (what == scissor)
		strcpy(wh, "가위");
	else
		strcpy(wh, "보");

	if (random == rock)
		strcpy(oppose, "바위");
	else if (random == scissor)
		strcpy(oppose, "가위");
	else
		strcpy(oppose, "보");

	printf("당신은 %s 선택, 컴퓨터는 %s 선택 : ", wh, oppose);
	if (random == what)
		printf("비겼습니다.\n");
	else
	{
		if (what > random)
		{
			printf("당신이 졌습니다.\n");
		}
		else
		{
			if (what == 1 && random == 3)
				printf("당신이 졌습니다.\n");
			else
				printf("이겼습니다.\n");
		}
	}
}
/*작성자 : 이재빈 HW25*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input();
int random();
void output(int temp1, int temp2);

int main()
{
	int sco, rand, count=0, tmp, left=0, right=100;
	printf("(입출력 예)\n");
	srand((unsigned int)time(NULL));
	rand = random();

	while (1)
	{
		sco = input();
		tmp = sco;
		if (sco == rand)
		{
			printf("우와~ 맞았당~~~ 추카추카~~ %d번째 만에 맞추셨습니다.\n", count+1);
			break;
		}
		else if (rand < sco)
		{ 
			right = (rand < sco) ? sco : rand;
			output(left, right);
		}
		else
		{
			left = (rand < sco) ? rand : sco;
			output(left, right);
		}
		count++;
	}
	return 0;
}

int input()
{
	int scope;
	printf("# 숫자를 입력하시오 : ");
	scanf("%d", &scope);
	return scope;
}

int random()
{
	int random_num;
	random_num = rand() % 100 + 1;
	return random_num;
}

void output(int temp1, int temp2)
{
	if (temp1 < temp2)
		printf("%d보다는 크고 %d보다는 작습니다.\n", temp1, temp2);
	else
		printf("%d보다는 크고 %d보다는 작습니다.\n", temp2, temp1);
}
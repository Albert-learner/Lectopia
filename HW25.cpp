/*�ۼ��� : ����� HW25*/
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
	printf("(����� ��)\n");
	srand((unsigned int)time(NULL));
	rand = random();

	while (1)
	{
		sco = input();
		tmp = sco;
		if (sco == rand)
		{
			printf("���~ �¾Ҵ�~~~ ��ī��ī~~ %d��° ���� ���߼̽��ϴ�.\n", count+1);
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
	printf("# ���ڸ� �Է��Ͻÿ� : ");
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
		printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n", temp1, temp2);
	else
		printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n", temp2, temp1);
}
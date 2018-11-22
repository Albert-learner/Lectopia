/*�ۼ��� : ����� HW26*/
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
	printf("(����� ��)\n");

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
	printf("���� ��� : %d�� %d��\n", win, same);
	return 0;
}

int input()
{
	int what;
	printf("# ������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
	scanf("%d", &what);

	if (what != 1 && what != 2 && what != 3)
	{
		printf("�� �Է� : ");
		scanf("%d", &what);
	}
	return what;
}

void output(int random, int what)
{
	char wh[10], oppose[10];
	
	if (what == rock)
		strcpy(wh, "����");
	else if (what == scissor)
		strcpy(wh, "����");
	else
		strcpy(wh, "��");

	if (random == rock)
		strcpy(oppose, "����");
	else if (random == scissor)
		strcpy(oppose, "����");
	else
		strcpy(oppose, "��");

	printf("����� %s ����, ��ǻ�ʹ� %s ���� : ", wh, oppose);
	if (random == what)
		printf("�����ϴ�.\n");
	else
	{
		if (what > random)
		{
			printf("����� �����ϴ�.\n");
		}
		else
		{
			if (what == 1 && random == 3)
				printf("����� �����ϴ�.\n");
			else
				printf("�̰���ϴ�.\n");
		}
	}
}
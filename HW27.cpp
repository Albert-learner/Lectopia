/*�ۼ��� : ����� HW27*/
#pragma warning (disable : 4996)
#include <stdio.h>

void myflush();
int input();

int main()
{
	int oval_w, oval_c = 0;

	while (1)
	{
		oval_w = input();

		if (oval_w >= 150 && oval_w <= 500)
		{
			oval_c++;
			printf("* ���� �ް��� �� : %d\n", oval_c);
		}
		else if (oval_w < 150)
		{
			printf("���߸��� ������ �峭���� ���ÿ�~ ^^\n");
		}
		else
		{
			printf("Ÿ���� ������ �峭���� ���ÿ�~ ^^\n");
		}

		if (oval_c == 10)
		{
			printf("\n\n");
			printf("*** �ް� ������ �������ϴ�.\n");
			break;
		}
	}
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
		;
}

int input()
{
	int weight, res;
	while (1)
	{
		printf("# ����� ���Ը� �Է��ϼ���(���� : g) : ");
		res = scanf("%d", &weight);

		if (res != 1)
			myflush();
		else
		{
			break;
		}
	}
	return weight;
}
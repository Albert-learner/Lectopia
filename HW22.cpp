/*�ۼ��� : ����� HW22*/
#include <stdio.h>

int input();

int main()
{
	int cost = input();
	int i;
	
	for (i = 0; i < cost; i++)
	{
		printf("*");
		if (i % 5 == 4)
			printf("\n");
	}
	printf("\n");
	return 0;
}

int input()
{
	int num;
	printf("(����� ��)\n");
	printf("# �������� �Է��ϼ��� : ");
	scanf("%d", &num);
	return num;
}
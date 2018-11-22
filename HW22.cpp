/*작성자 : 이재빈 HW22*/
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
	printf("(입출력 예)\n");
	printf("# 정수값을 입력하세요 : ");
	scanf("%d", &num);
	return num;
}
#pragma warning (disable : 4996)
#include <stdio.h>

int abs(int);

int main()
{
	int num;
	printf("하나의 수를 입력하세요 : ");
	scanf("%d", &num);
	printf("입력된 수의 절댓값은 : %d입니다.\n", abs(num));
	return 0;
}

int abs(int x)
{
	if (x > 0) { return (x); }
	else { return (-x); }
}
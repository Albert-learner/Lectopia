#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int k, s = 0;
	printf("정수를 입력하세요. 문자를 입력하면 종료됩니다 : ");
	
	while (scanf("%d", &k) == 1)
	{
		printf("지금까지의 합은 : %d 입니다.\n", s += k);
		printf("정수를 입력하세요. 문자를 입력하면 종료됩니다 : ");
	}
	return 0;
}
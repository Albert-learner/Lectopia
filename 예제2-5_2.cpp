#include <stdio.h>

int main()
{
	int k, s = 0;

	while (1)
	{
		scanf("%d", &k);
		if (k == 0) break;
		printf("지금까지 합은 %d 입니다.\n", s += k);
		printf("수를 입력하세요. 0(zero)을 입력하면 종료됩니다 : ");
	}
	return 0;
}
#include <stdio.h>

int main()
{
	char str[3][6] =
	{
		"Year",
		"Month",
		"Day"
	};
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%d���� �����ּ� %p�̰�, %d���� ���۹��ڴ� %c�̴�\n", i, *(str+i), i, *(*(str+i)+0));
	}
	return 0;
}
#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int k, s = 0;
	printf("������ �Է��ϼ���. ���ڸ� �Է��ϸ� ����˴ϴ� : ");
	
	while (scanf("%d", &k) == 1)
	{
		printf("���ݱ����� ���� : %d �Դϴ�.\n", s += k);
		printf("������ �Է��ϼ���. ���ڸ� �Է��ϸ� ����˴ϴ� : ");
	}
	return 0;
}
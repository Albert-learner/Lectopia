#pragma warning (disable : 4996)
#include <stdio.h>

int abs(int);

int main()
{
	int num;
	printf("�ϳ��� ���� �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("�Էµ� ���� ������ : %d�Դϴ�.\n", abs(num));
	return 0;
}

int abs(int x)
{
	if (x > 0) { return (x); }
	else { return (-x); }
}
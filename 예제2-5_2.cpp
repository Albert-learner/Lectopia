#include <stdio.h>

int main()
{
	int k, s = 0;

	while (1)
	{
		scanf("%d", &k);
		if (k == 0) break;
		printf("���ݱ��� ���� %d �Դϴ�.\n", s += k);
		printf("���� �Է��ϼ���. 0(zero)�� �Է��ϸ� ����˴ϴ� : ");
	}
	return 0;
}
/*�ۼ��� : ����� HW8*/
#include <stdio.h>

int main()
{
	int his, lit, ent;
	int sum;
	float avg;
	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &his, &lit, &ent);
	sum = his + lit + ent;
	avg = sum / 3.0;
	printf("������ %d�̰�, ����� %.2f�Դϴ�.\n", sum, avg);

	return 0;
}
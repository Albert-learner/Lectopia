/*�ۼ��� : ����� HW6*/
#include <stdio.h>

int main()
{
	int fah;
	printf("(����� ��)\n");
	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf("%d", &fah);
	
	double cel = (fah-32)/1.8;
	printf("���� �µ��� %.1lf�� �Դϴ�.\n", cel);
	return 0;
}
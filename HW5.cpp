/*�ۼ��� : ����� HW5*/
#include <stdio.h>

int main()
{
	int amount, basic=660;
	double cost, tax, final_cost;
	printf("(����� ��)\n");
	printf("���� ��뷮�� �Է��ϼ���(kw): ");
	scanf("%d", &amount);

	cost = basic + (amount*88.5);
	tax = cost * 0.09;
	final_cost = cost + tax;
	printf("���� ������� %f �� �Դϴ�.\n", final_cost);
	return 0;
}
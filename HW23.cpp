/*�ۼ��� : ����� HW23*/
#include <stdio.h>

int main()
{
	printf("(���� ��)\n");
	while (1)
	{
		int num1, num2, result;
		printf("# �ΰ��� ������ �Է��ϼ��� : ");
		result=scanf("%d %d", &num1, &num2);

		if (result != 2)
			break;

		if (num1 > num2)
		{
			printf("%d -%d = %d\n", num1, num2, num1 - num2);
		}
		else
		{
			printf("%d - %d = %d\n", num2, num1, num2 - num1);
		}
	}
	return 0;
}
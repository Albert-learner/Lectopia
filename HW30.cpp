/*�ۼ��� : ����� HW30*/
#pragma warning (disable :4996)
#include <stdio.h>

int main()
{
	int cost, i, t, check=1;
	unsigned int comp = 0x80000000;
	char bit;
	printf("(����� ��)\n");
	printf("* 10���� ������ �Է��Ͻÿ� : ");
	scanf("%d", &cost);

	for (t = 0; t < 2; t++)
	{

	}
	for (i = 0; i<32; i++)
	{
		if (cost > 0)
		{
			bit = (cost & comp) ? 1 : 0;
			if (bit == 1)
			{
				printf("%d", bit);
			}
			else
			{
				printf("%d", bit);
			}
			comp >>= 1;
		}
		else if (cost < 0)
		{
			bit = (cost & comp) ? 1 : 0;
			if (bit == 1)
			{
				printf("%d", bit);
			}
			else
			{
				printf("%d", bit);
			}
			comp >>= 1;
		}
		else
		{
			printf("0");
		}
	}
	printf("(2)");
	printf("\n");
	return 0;
}
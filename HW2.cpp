/*�ۼ��� : ����� HW2*/
#include <stdio.h>

int main()
{
	int cost=278970;
	int cnt1, cnt2, cnt3, cnt4, cnt5, cnt6, cnt7, cnt8;

	if(cost > 50000)
	{
		cnt1 = cost / 50000;
		cost -= 50000*cnt1;
	}
	if(cost > 10000)
	{
		cnt2 = cost / 10000;
		cost -= 10000*cnt2;
	}
	if (cost > 5000)
	{
		cnt3 = cost / 5000;
		cost -= 5000*cnt3;
	}
	if (cost > 1000)
	{
		cnt4 = cost / 1000;
		cost -= 1000*cnt4;
	}
	if (cost > 500)
	{
		cnt5 = cost / 500;
		cost -= 500*cnt5;
	}
	if (cost > 100)
	{
		cnt6 = cost / 100;
		cost -= 100*cnt6;
	}
	if (cost > 50)
	{
		cnt7 = cost / 50;
		cost -= 50*cnt7;
	}
	if (cost > 10)
	{
		cnt8 = cost / 10;
		cost -= 10*cnt8;
	}

	printf("(������)\n");
	printf("50000���� => %d��\n", cnt1);
	printf("10000���� => %d��\n", cnt2);
	printf("5000���� => %d��\n", cnt3);
	printf("1000���� => %d��\n", cnt4);
	printf("500���� => %d��\n", cnt5);
	printf("100���� => %d��\n", cnt6);
	printf("50���� => %d��\n", cnt7);
	printf("10���� => %d��\n", cnt8);
	return 0;
}
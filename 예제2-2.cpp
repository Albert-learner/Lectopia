#pragma warning (disable :4996)
#include <stdio.h>

int main()
{
	int weight;
	scanf("%d", &weight);

	if (weight >= 300)
	{
		printf("������� 1000��");
	}
	else
	{
		printf("������� 500��");
	}
	return 0;
}
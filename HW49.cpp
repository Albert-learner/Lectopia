/*�ۼ��� : ����� HW49*/
#pragma warning (disable : 4996)
#include <stdio.h>

void swap(int *ip, int count);

int main()
{
	int arr[] = { 3, 5, 1, 9, 2 }, i;
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("(��� ��)\n");
	printf("ó�� �迭�� ����� �� : ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	swap(arr, size);
	printf("�ٲ� �迭�� ����� �� : ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

void swap(int *ip, int count)
{
	int i, temp;

	for (i = 0; i < count / 2; i++)
	{
		temp = ip[i];
		ip[i] = ip[count - i - 1];
		ip[count - i - 1] = temp;
	}
}


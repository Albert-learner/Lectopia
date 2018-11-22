/*작성자 : 이재빈 HW49*/
#pragma warning (disable : 4996)
#include <stdio.h>

void swap(int *ip, int count);

int main()
{
	int arr[] = { 3, 5, 1, 9, 2 }, i;
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("(출력 예)\n");
	printf("처음 배열에 저장된 값 : ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	swap(arr, size);
	printf("바뀐 배열에 저장된 값 : ");
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


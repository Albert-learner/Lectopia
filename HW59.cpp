/*�ۼ��� : ����� HW59*/
#pragma warning (disable : 4996)
#include <stdio.h>

void arr_input(int *ip, int size);
int confirm(int *ip, int size);

int main()
{
	int arr[1000], count, res;
	printf("(����� ��)\n");
	while (1)
	{
		printf("* �Է��� ������ ���� : ");
		res=scanf("%d", &count);

		if (res != 1)
		{
			break;
		}
		else
		{
			arr_input(arr, count);
			confirm(arr, count);
		}
	}	
	return 0;
}

void arr_input(int *ip, int size)
{
	int i;
	printf("* ���� �Է� : ");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &ip[i]);
	}
}

int confirm(int *ip, int size)
{
	int cnt=0, i, j, cri, comp;

	for(i=0;i<size;i++)
	{
		cri = ip[i];
		for (j = 0; j < i; j++)
		{
			comp = ip[j];
			
			if (cri == comp)
			{
				break;
			}
			else
			{
				continue;
			}
		}
		if (i == j)
		{
			cnt++;
		}
		else
		{
			;
		}
	}
	printf("���� �ٸ� ���� ���� : %d\n", cnt);
	return cnt;
}
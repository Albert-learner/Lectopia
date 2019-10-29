#include <stdio.h>
#include <stdlib.h>

typedef int(*intArrayPtr)[4];
intArrayPtr memoryAllocation(int);

int main()
{
	int row;
	int(*aryPtr)[4] = NULL;

	printf("행(row)의 수 입력 : ");
	scanf("%d", &row);

	aryPtr = memoryAllocation(row);
	aryPtr[row - 1][3] = 77;
	printf("aryPtr[%d][3] = %d", row - 1, aryPtr[row - 1][3]);

	free(aryPtr);

	getchar(); getchar();
	return 0;
}

intArrayPtr memoryAllocation(int row)
{
	intArrayPtr p;
	p = (intArrayPtr)malloc(sizeof(int[4]));

	return p;
}
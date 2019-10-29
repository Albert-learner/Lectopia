#pragma warning (disable : 4477)
#include <stdio.h>

int main()
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int *ptr, i;
	ptr = ary;

	printf("1. ptr     %x\n", ptr);
	printf("2. *ptr++  %d\n", *ptr++);
	printf("3. ptr     %x\n", ptr);
	printf("4. *++ptr  %d\n", *++ptr);
	printf("5. ptr     %x\n", ptr);
	printf("6. (*ptr)++ %d\n", (*ptr)++);
	printf("7. *ptr    %d\n", *ptr);
	printf("8. ++*ptr  %d\n", ++*ptr);

	for (i = 0; i < sizeof(ary) / sizeof(ary[0]); i++)
	{
		printf("ary[%d] = %d\n", i, ary[i]);
	}
	return 0;
}
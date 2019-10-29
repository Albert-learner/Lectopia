#include <stdio.h>
void sub1(void);
void sub2(void);
void sub3();

int main()
{
	typedef void(*func_t)();
	int i;
	func_t *fptr;
	func_t funAry[3] = { sub1, sub2, sub3 };
	
	fptr = funAry;
	for (i = 0; i < sizeof(funAry)/sizeof(funAry[0]); i++)
	{
		fptr[i]();
		funAry[i]();
		printf("\n");
	}
	return 0;
}

void sub1()
{
	printf("나는 sub1()함수~\n");
}

void sub2()
{
	printf("나는 sub2()함수\n");
}

void sub3()
{
	printf("나는 sub3()함수\n");
}
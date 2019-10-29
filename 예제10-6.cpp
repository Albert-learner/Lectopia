#include <stdio.h>
#define SQUARE(x) x*x //(x)*(x)
int square(int);

int main()
{
	int res;
	res = square(3 + 4);
	printf("일반 함수를 이용한 3+4의 거듭제곱 : %d\n", res);
	res = SQUARE(3 + 4);
	printf("매크로 함수를 이용한 3+4의 거듭제곱 : %d\n", res);
	return 0;
}

int square(int x)
{
	return x * x;
}

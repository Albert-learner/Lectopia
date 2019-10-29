#pragma warning(disable : 4996)
#include <stdio.h>

int main()
{
	char str[100];
	double pi = 3.141592;
	sprintf(str, "원주율 값은 %.2lf입니다.", pi);
	printf("%s\n", str);
	return 0;
}
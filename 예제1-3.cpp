/* Escape Sequence 의 기능을 살펴보는 예제*/
#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Hello");
	printf("Hello\t");
	printf("Hello\n");  getch();
	printf("Korea\r");  getch();
	printf("C\n");  getch();
	printf("King\b\b\b");  getch();
	printf("ong\n");  getch();
	printf("1234567812345681234567812345678\n");  getch();
	printf("1\t123\t12345\t1234567\n");  getch();
	printf("\\, \", \n"); getch();
	return 0;
}
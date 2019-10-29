#include <stdio.h>

int main()
{
	int a = 5, b[10];
	double c[3];

	printf("'A'   size : %d\n", sizeof('A'));
	printf("\"A\" size : %d\n", sizeof("A"));
	printf("\"AB\" size : %d\n", sizeof("AB"));
	printf("5 size : %d\n", sizeof(5));
	printf("5.0 size : %d\n", sizeof(5.0));
	printf("5.0f size : %d\n", sizeof(5.0f));
	printf("char size : %d\n", sizeof(char));
	printf("int size : %d\n", sizeof(int));
	printf("float size : %d\n", sizeof(float));
	printf("double size : %d\n", sizeof(double));
	printf("a size : %d\n", sizeof(++a));
	printf("a = %d\n", a);
	printf("b size : %d\n", sizeof(b));
	printf("c size : %d\n", sizeof(c));
	return 0;
}
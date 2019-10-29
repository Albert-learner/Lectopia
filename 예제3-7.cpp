#include <stdio.h>

int main()
{
	char a = 'A', b = 'a', c = 'a' - 'A';
	printf("ASCII code %c is %d\n", a, a);
	printf("'a' + 1 = %c\n", 'a' + 1);
	printf("%d = %c\n", b - a, c);
	printf("%c -> %d\n", b - 32, 'a' - 32);
	return 0;
}
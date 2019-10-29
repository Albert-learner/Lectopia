#include <stdio.h>

enum Nation
{
	KOREA=3,
	USA,
	JAPAN,
	CHINA
};

int main()
{
	enum Nation x;
	x = KOREA;
	printf("x = %d\n", x);

	printf("%d\n", KOREA);
	printf("%d\n", USA);
	printf("%d\n", JAPAN);
	printf("%d\n", CHINA);
	return 0;
}
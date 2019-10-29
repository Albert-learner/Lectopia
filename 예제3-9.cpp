#pragma warning (disable : 4477)
#include <stdio.h>

int main()
{
	printf("1 / 2 = %lf\n", 1 / 2);
	printf("1.0 / 2 = %lf\n", 1.0 / 2);
	printf("'A' + 32 = %c(%d)\n", 'A' + 32, 'A' + 32);
	printf("'a' - 32 = %c(%d)\n", 'a' - 32, 'a' - 32);
	return 0; 
}
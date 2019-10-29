#include <stdio.h>
#define TC 100
#ifdef  TC
#define MAX 200
#else
#define MAX 300
#endif //  TC

int main()
{
	printf("%d\n", MAX);
	return 0;
}

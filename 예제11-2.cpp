#include <stdio.h>

int main()
{
	char *cp, ch = 'a';
	int *ip, num = 5;
	double *dp, dnum = 3.14;
	cp = &ch;
	ip = &num;
	dp = &dnum;
	printf("cp : %d, *cp : %d Byte\n", sizeof(cp), sizeof(*cp));
	printf("ip : %d, *ip : %d Byte\n", sizeof(ip), sizeof(*ip));
	printf("dp : %d, *dp : %d Byte\n", sizeof(dp), sizeof(*dp));
	return 0;
}
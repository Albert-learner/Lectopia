#include <stdio.h>

typedef struct _score
{
	char name[20];
	int kor, eng, mat;
}Score;

void struct_prn(const char *, int, int, int);

int main()
{
	Score sd = { "Hong gil dong", 80, 90, 100 };
	struct_prn(sd.name, sd.kor, sd.eng, sd.mat);
}

void struct_prn(const char *cp, int k, int e, int m)
{
	printf("%s : %d %d %d\n", cp, k, e, m);
}
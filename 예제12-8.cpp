#include <stdio.h>
/*
����ü ������ ������ ����ü�� ����ų �� �ִ� ���� ���� ����
*/
typedef struct _score
{
	char name[20];
	int kor, eng, mat;
}Score;

void struct_prn(const Score *);

int main()
{
	Score sd = { "Hong gil dong", 80, 90, 100 };
	struct_prn(&sd);
	return 0;
}

void struct_prn(const Score *p)
{
	printf("%s : %d %d %d\n", p->name, p->kor, p->eng, p->mat);
}
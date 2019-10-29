#include <stdio.h>
/*
구조체 포인터 변수로 구조체를 가리킬 수 있는 아주 좋은 예제
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
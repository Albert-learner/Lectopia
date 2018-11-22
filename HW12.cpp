/*작성자 : 이재빈 HW12*/
#include <stdio.h>
#include <string.h>

int main()
{
	char name[70];
	printf("(입출력 예)\n");
	printf("이름을 입력하시오 : ");
	scanf("%s", name);

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	return 0;
}

/*
scanf("%[^\n]s", name);

printf("(출력형태)\n");
printf("\"%s\"\n", name);
printf("\"%20s\"\n", name);
printf("\"%-20s\"\n", name);
*/
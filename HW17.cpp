/*작성자 : 이재빈 HW17*/
#include <stdio.h>
#include <string.h> 

void myflush();

int main()
{
	char eng_name[20];
	double hei;
	char gen;
	char gend[8];
	int i, len;

	for (i = 0; i < 2; i++)
	{
		printf("(실행예%d)\n", i+1);
		printf("# 성명 입력 : ");
		fgets(eng_name, 20, stdin);
		printf("# 키 입력(cm 단위) : ");
		scanf("%lf", &hei);
		printf("# 성별입력(M/F) : ");
		scanf(" %c", &gen);

		if (gen == 'M' || gen=='m')
		{
			strcpy(gend, "남성");
		}
		else if(gen == 'W' || gen=='w')
		{
			strcpy(gend, "여성");
		}
		
		len = strlen(eng_name);
		eng_name[len - 1] = '\0';
		printf("%s씨의 키는 %0.2lfcm이고 %s입니다.\n", eng_name, hei, gend);
		printf("\n\n");
		myflush();
	}
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
		;
}
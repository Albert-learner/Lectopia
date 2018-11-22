/*작성자 : 이재빈 HW28*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>



int main()
{
	char ch;
	int eng_count = 0, num_count = 0, spac_count = 0, exce_count = 0;

	printf("(실행 예)\n");
	printf("# 영문 문장을 입력 하시오 : \n");
	while ((ch=getchar()) != EOF)
	{
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{
			eng_count++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			num_count++;
		}
		else if (ch == ' ' || ch == '\t' || ch == '\n')
		{
			spac_count++;
		}
		else
			exce_count++;
	}

	printf("영문자 대소문자 개수 : %d개\n", eng_count);
	printf("숫자문자 개수 : %d개\n", num_count);
	printf("여백문자(space, tab, enter) 개수 : %d개\n", spac_count);
	printf("그 외 기타문자 개수 : %d개\n", exce_count);
	return 0;
}


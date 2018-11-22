/*작성자 : 이재빈 HW13*/
#include <stdio.h>
#include <string.h>

int main()
{
	char first_name[7];
	char last_name[10];
	
	int i = 0, cnt_f=0;
	
	printf("(입력 예)\n");
	printf("# 성을 입력하시오 : ");
	scanf("%s", first_name);
	printf("# 이름을 입력하시오 : ");
	scanf("%s", last_name);
	printf("(출력 예)\n");
	printf("%s %s\n", first_name, last_name);
	printf("%*d %*d\n", strlen(first_name), strlen(first_name), strlen(last_name), strlen(last_name));
	return 0;
}
/*�ۼ��� : ����� HW13*/
#include <stdio.h>
#include <string.h>

int main()
{
	char first_name[7];
	char last_name[10];
	
	int i = 0, cnt_f=0;
	
	printf("(�Է� ��)\n");
	printf("# ���� �Է��Ͻÿ� : ");
	scanf("%s", first_name);
	printf("# �̸��� �Է��Ͻÿ� : ");
	scanf("%s", last_name);
	printf("(��� ��)\n");
	printf("%s %s\n", first_name, last_name);
	printf("%*d %*d\n", strlen(first_name), strlen(first_name), strlen(last_name), strlen(last_name));
	return 0;
}
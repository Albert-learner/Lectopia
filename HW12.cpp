/*�ۼ��� : ����� HW12*/
#include <stdio.h>
#include <string.h>

int main()
{
	char name[70];
	printf("(����� ��)\n");
	printf("�̸��� �Է��Ͻÿ� : ");
	scanf("%s", name);

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	return 0;
}

/*
scanf("%[^\n]s", name);

printf("(�������)\n");
printf("\"%s\"\n", name);
printf("\"%20s\"\n", name);
printf("\"%-20s\"\n", name);
*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	const char *p = "C program";
	char str[20] = "C program";

	//���ڿ� ���� ���� ���� �Ǵ��ϱ�
	//p[0] = 'B'; -> const char���̹Ƿ� ���ڸ� �ٷ� �ٲ� �� ����
	str[0] = 'B'; // ���ڿ� �迭�̹Ƿ� �迭 �� �Ϻ� �ٲ� �� �ִ�

	printf("p : %s\n", p);
	printf("str : %s\n", str);

	//strcpy(p, "Java"); //const char���̹Ƿ� ���ڿ� �ּ� �����ؼ� �ٲ� �� ����
	strcpy(str, "Java");

	printf("p : %s\n", p);
	printf("str : %s\n", str);

	p = "Python programming";
	//str = "Python programming"; //���ڿ� �迭�̹Ƿ� ũ�� ���� �ʾ� �ٲ� �� ����, ũ�� ���Ƶ� �ƿ� �� �� ����

	/*
	���ڿ� ��ü�� �ٲ� ������ const char *������ �޴°� ���ϰ�
	���ڿ� �Ϻθ� �ٲ� ������ ���ڿ� �迭 char []�� �޴� �� ���ϴ�
	*/
	printf("p : %s\n", p);
	printf("str : %s\n", str);
	return 0;
}
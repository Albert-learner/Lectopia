#pragma warning (disable : 4996)
#include <stdio.h>

//void myflush();

int main()
{
	char ch;
	int i = 0;
	printf("�Է��� ���ڿ� ���Ͽ� ��/�� �Ǻ��� �帳�ϴ�\n");
	while (i++ < 3)
	{
		printf("\n���ڸ� �ϳ� �Է��ϸ� ���� ġ���� : ");
		scanf("%c", &ch);

		if (ch >= 'A' && ch <= 'Z')
		{
			printf("�Է��� ���ڴ� �빮���Դϴ�.\n");
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			printf("�Է��� ���ڴ� �ҹ����Դϴ�.\n");
		}
		else
		{
			//myflush();
			;
		}
	}
	return 0;
}

//void myflush()
//{
//	while (getchar() != '\n')
//	{
//		;
//	}
//}
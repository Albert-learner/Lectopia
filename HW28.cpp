/*�ۼ��� : ����� HW28*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>



int main()
{
	char ch;
	int eng_count = 0, num_count = 0, spac_count = 0, exce_count = 0;

	printf("(���� ��)\n");
	printf("# ���� ������ �Է� �Ͻÿ� : \n");
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

	printf("������ ��ҹ��� ���� : %d��\n", eng_count);
	printf("���ڹ��� ���� : %d��\n", num_count);
	printf("���鹮��(space, tab, enter) ���� : %d��\n", spac_count);
	printf("�� �� ��Ÿ���� ���� : %d��\n", exce_count);
	return 0;
}


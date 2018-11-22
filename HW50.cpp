/*�ۼ��� : ����� HW50*/
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

void myflush();
void str_input(char *cp, int size);
int strcheck(char *cp, char tar);

int main()
{
	int i, pos, len;
	char str[100] = {'\0'}, ch;
	printf("(����� ��)\n");

	for (i = 0; i < 3; i++)
	{
		str_input(str, 7);
		printf("# ���ڸ� �Է��Ͻÿ� : ");
		scanf("%c", &ch);
		len = strlen(str);
		str[len - 1] = '\0';

		pos=strcheck(str, ch);
		if (pos != -1)
		{
			printf("\"%s\"���ڿ� �ȿ� \'%c\'���ڴ� %d�� ��ġ�� �����մϴ�.\n\n", str, ch, pos);
		}
		else
		{
			printf("\"%s\"���ڿ� �ȿ� \'%c\'���ڴ� �������� �ʽ��ϴ�.", str, ch);
		}
		printf("\n\n");
		myflush();
	}
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}

void str_input(char *cp, int size)
{
	int i;

	printf("# ���ڿ��� �Է��Ͻÿ� : ");
	for (i = 0; i < size; i++)
	{
		scanf("%c", &cp[i]);
	}
}

int strcheck(char *cp, char ch)
{
	int i, length = strlen(cp), position;

	for (i = 0; i < length; i++)
	{
		if (cp[i] == ch)
		{
			position = i;
			break;
		}
		else
		{
			if (i == length - 1)
			{
				position = -1;
			}
			else
			{
				continue;
			}
		}
	}
	return position;
}
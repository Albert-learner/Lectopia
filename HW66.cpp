/*작성자 : 이재빈 HW66*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void myflush();
char **myAlloc(int, int);
void str_input(char **, int);
void str_output(char **, int);
void sortData(char **, int);
void myDelete(char **, int);

int main()
{
	char **p;
	int row=5;

	printf("(입력화면)\n");
	p = myAlloc(5, 1000);
	str_input(p, 5);
	str_output(p, 5);
	myDelete(p, 5);
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}

char **myAlloc(int row, int col)
{
	char **cp;
	int i;
	cp = (char **)malloc(sizeof(char *)*row);

	for (i = 0; i < row; i++)
	{
		cp[i] = (char *)malloc(sizeof(char)*col);
	}
	return cp;
}

void str_input(char **cp, int row)
{
	int i;

	for (i = 0; i < row; i++)
	{
		printf("# 문자열 %d : ", i + 1);
		scanf("%s", cp[i]);
	}
}

void str_output(char **cp, int row)
{
	int i;

	printf("(출력화면)\n");
	for (i = 0; i < row; i++)
	{
		sortData(cp, row);
		printf("%d. %s\n", i+1, cp[i]);
	}
}

void sortData(char **cp, int row)
{
	int i, j, size;
	size = row;
	char tmp[1000] = { '\0' };

	for (i = 0; i < size-1; i++)
	{
		if (strcmp(cp[i], cp[i + 1]) > 0)
		{
			strcpy(tmp, cp[i]);
			strcpy(cp[i], cp[i + 1]);
			strcpy(cp[i + 1], tmp);
		}
		else
		{
			;
		}
	}
}

void myDelete(char **cp, int row)
{
	int i;

	for (i = 0; i < row; i++)
	{
		free(cp[i]);
	}
	free(cp);
}
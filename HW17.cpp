/*�ۼ��� : ����� HW17*/
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
		printf("(���࿹%d)\n", i+1);
		printf("# ���� �Է� : ");
		fgets(eng_name, 20, stdin);
		printf("# Ű �Է�(cm ����) : ");
		scanf("%lf", &hei);
		printf("# �����Է�(M/F) : ");
		scanf(" %c", &gen);

		if (gen == 'M' || gen=='m')
		{
			strcpy(gend, "����");
		}
		else if(gen == 'W' || gen=='w')
		{
			strcpy(gend, "����");
		}
		
		len = strlen(eng_name);
		eng_name[len - 1] = '\0';
		printf("%s���� Ű�� %0.2lfcm�̰� %s�Դϴ�.\n", eng_name, hei, gend);
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
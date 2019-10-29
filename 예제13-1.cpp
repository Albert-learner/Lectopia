#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#define FILE_OPEN(fp, filename, mode) if((fp=fopen(filename, mode)) == NULL){\
									printf("File open error!\n");\
									return 0;}

int main(int argc, char *argv[])
{
	int c;
	FILE *ifp, *ofp;
	if (argc != 3)
	{
		printf("���� : %s �������� ���纻 ����\n", argv[0]);
		return 0;
	}
	FILE_OPEN(ifp, argv[1], "rb");
	FILE_OPEN(ofp, argv[2], "wb");

	while ((c = fgetc(ifp)) != EOF)
	{
		fputc(c, ofp);
	}
	fclose(ifp);
	fclose(ofp);
	return 0;
}
/*작성자 : 이재빈 HW52*/
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable : 4996)
#include <stdio.h>

FILE *fileOpen(const char *filename, const char *mode);
int fileRead(FILE *fp, int *dataArray);
void sort_arr(int *ip, int data);

int main(int argc, char *argv[])
{
	int testcase, dataCnt;
	int data[100];
	int i, j;
	FILE *fp;
	fp = fileOpen("C:\\data\\hw52_sortData.txt","rt");
	if (fp == NULL) return 1;

	fscanf(fp, "%d", &testcase);

	for (i = 0; i < testcase; i++)
	{
		printf("# 소트 전 데이터 : ");
		dataCnt = fileRead(fp, data);
		for (j = 0; j < dataCnt; j++)
		{
			printf("%3d", data[j]);
		}
		printf("\n");
		
		printf("# 소트 후 데이터 : ");
		for (j = 0; j < dataCnt; j++)
		{
			sort_arr(data, dataCnt);
			printf("%3d", data[j]);
		}
		printf("\n");
		printf("\n");
	}

	fclose(fp);
	return 0;
}

FILE *fileOpen(const char *filename, const char *mode)
{
	FILE *fp;
	if ((fp = fopen(filename, mode)) == NULL)
	{
		printf("File open error!\n");
	}
	return fp;
}

int fileRead(FILE *fp, int *data)
{
	int data_cnt = 0;
	while (1)
	{
		fscanf(fp, "%d", &data[data_cnt]);
		if (data[data_cnt] == 0) break;
		data_cnt++;
	}
	return data_cnt;
}

void sort_arr(int *ip, int data)
{
	int minIndex = 0, i, j, temp;

	for (i = 0; i < data-1; i++)
	{
		minIndex = i;
		for (j = i + 1; j < data; j++)
		{
			if (ip[j] < ip[minIndex])
			{
				minIndex = j;
			}
		}
		temp = ip[minIndex];
		ip[minIndex] = ip[i];
		ip[i] = temp;
	}
}
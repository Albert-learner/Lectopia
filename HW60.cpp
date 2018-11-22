/*�ۼ��� : ����� HW60*/
#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH  13 /* �ֹε�Ϲ�ȣ ����*/

int availabilityCheck(char *resident_number);
int checkLengthCharacter(char *resident_number);
int checkDate(char *resident_number);
int checkIdentification(char *resident_number);
int checkGender(char *resident_number);
int checkYear(int year);

int main()
{
	/* �׽�Ʈ�� �ֹε�Ϲ�ȣ ���� �迭*/
	char resident_number[][20] = { "0402291000008", "870401102321", "00031541949179",
		"0003154194917", "801203#201122", "7804155328845", "7804150328840",
		"9612241068382", "9902292194322", "0230174326176", "8811391042219",
		"8100122042213", "8112002042213", "9210101069415", "0802294012345",
		"8806311069417","8807311069418" };
	int i, count;
	/* �˻��� �ֹε�Ϲ�ȣ�� ���� ���*/
	count = sizeof(resident_number) / sizeof(resident_number[0]);
	for (i = 0; i<count; i++) /* �ֹε�Ϲ�ȣ ��ȿ�� �˻縦 �ݺ������� ���� ��*/
	{
		if (availabilityCheck(resident_number[i]) == TRUE)
		{
			printf("(+) �ֹι�ȣ%s��(��) ��ȿ�� ��ȣ�Դϴ�.\n", resident_number[i]);
		}
		else
		{
			printf("(-) �ֹι�ȣ%s��(��) ��ȿ���� ���� ��ȣ�Դϴ�.\n", resident_number[i]);
		}
	}
	return 0;
}
/*----------------------------------------------------------------
availabilityCheck()�Լ�: �ֹε�Ϲ�ȣ ��ȿ�� �˻� �Լ�
��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
���ϰ�: ��ȿ�ϸ�TRUE, ��ȿ���� ������FALSE ����
------------------------------------------------------------------*/
int availabilityCheck(char *res_num)
{
	if (checkLengthCharacter(res_num) == TRUE)
	{
		if (checkDate(res_num) == TRUE)
		{
			if (checkGender(res_num) == TRUE)
			{
				if (checkIdentification(res_num) == TRUE)
				{
					return TRUE;
				}
				else
				{
					return FALSE;
				}
			}
			else
			{
				return FALSE;
			}
		}
		else
		{
			return FALSE;
		}
	}
	else
	{
		return FALSE;
	}
}
/*-------------------------------------------------------------------------
checkLengthCharacter()�Լ�: �ֹε�Ϲ�ȣ ���� �� ���� ��ȿ���˻� �Լ�
��������: �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
���ϰ�: �ֹε�Ϲ�ȣ�� ���̰� �°� ���ڹ��ڷθ� �����Ǿ� ������TRUE,
���̰� ª�ų� ���, ���� ���ڰ� �ƴ� ���ڰ� ���� ������FALSE ����
--------------------------------------------------------------------------*/
int checkLengthCharacter(char *res_num)
{
	int len, i;
	len = strlen(res_num);

	if (len == RESIDENT_NUMBER_LENGTH)
	{
		for (i = 0; i < len; i++)
		{
			if (0 <= res_num[i] - '0' && res_num[i] - '0' <= 9)
			{
				if (i == 12)
				{
					return TRUE;
				}
				else
				{
					continue;
				}
			}
			else
			{
				return FALSE;
			}
		}
	}
	else
	{
		return FALSE;
	}
}
/*----------------------------------------------------------------
checkDate()�Լ�: ù6�ڸ�(��,��,��)�� ��ȿ�� �˻� �Լ�
��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
���ϰ�: ��ȿ�� ��¥�̸�TRUE, ��ȿ���� ���� ��¥�̸�FALSE ����
------------------------------------------------------------------*/
int checkDate(char *res_num)
{
	int year, month, day, gen;

	month = (res_num[2] - '0') * 10 + res_num[3] - '0';
	day = (res_num[4] - '0') * 10 + res_num[5] - '0';
	gen = res_num[6] - '0';

	if (gen == 1 || gen == 2)
	{
		year = 1900 + (res_num[0] - '0') * 10 + res_num[1] - '0';
	}
	else if (gen == 3 || gen == 4)
	{
		year = 2000 + (res_num[0] - '0') * 10 + res_num[1] - '0';
	}
	else
	{
		return FALSE;
	}

	if (checkYear(year) == 1)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			if (1<=day && day <= 31)
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			if (1<=day && day <= 30)
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		}
		else if (month == 2)
		{
			if (1<=day && day <= 29)
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		}
		else
		{
			return FALSE;
		}
	}
	else
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			if (1 <= day && day <= 31)
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			if (1 <= day && day <= 30)
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		}
		else if (month == 2)
		{
			if (1 <= day && day <= 28)
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		}
		else
		{
			return FALSE;
		}
	}
}
/*----------------------------------------------------------------------
checkGender()�Լ�: 7��° �ڸ��� �����ĺ���ȣ ��ȿ�� �˻��Լ�
��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
���ϰ�: �����ĺ���ȣ��'1'~'4'�̸�TRUE, �� �� ���� �����̸�FALSE ����
-----------------------------------------------------------------------*/
int checkGender(char *res_num)
{
	int cri = res_num[6];

	if (1 <= cri - '0' && cri - '0' <= 4)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
/*------------------------------------------------------------------------
checkIdentification()�Լ�: �ֹε�Ϲ�ȣ ���ڸ�(�ν���) ��ȿ�� �˻� �Լ�
��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
���ϰ�: ��ȿ�� �ν����̸�TRUE, ��ȿ���� ���� �ν����̸� FALSE ����
-------------------------------------------------------------------------*/
int checkIdentification(char *res_num)
{
	int i, sum = 0;

	for (i = 0; i < 12; i++)
	{
		sum += res_num[i] - '0';
	}
	sum %= 10;

	if (sum == res_num[12]-'0')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
/*----------------------------------------------------------------
checkYear ()�Լ�: �⵵�� ��,��� ���� �˻�
��������: ��,��� �˻��� �⵵
���ϰ�: �����̸� TRUE, ����̸�FALSE ����
------------------------------------------------------------------*/
int checkYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				return TRUE;
			else
				return FALSE;
		}
		else
			return TRUE;
	}
	else
		return FALSE;
}
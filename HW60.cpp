/*작성자 : 이재빈 HW60*/
#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH  13 /* 주민등록번호 길이*/

int availabilityCheck(char *resident_number);
int checkLengthCharacter(char *resident_number);
int checkDate(char *resident_number);
int checkIdentification(char *resident_number);
int checkGender(char *resident_number);
int checkYear(int year);

int main()
{
	/* 테스트할 주민등록번호 저장 배열*/
	char resident_number[][20] = { "0402291000008", "870401102321", "00031541949179",
		"0003154194917", "801203#201122", "7804155328845", "7804150328840",
		"9612241068382", "9902292194322", "0230174326176", "8811391042219",
		"8100122042213", "8112002042213", "9210101069415", "0802294012345",
		"8806311069417","8807311069418" };
	int i, count;
	/* 검사할 주민등록번호의 개수 계산*/
	count = sizeof(resident_number) / sizeof(resident_number[0]);
	for (i = 0; i<count; i++) /* 주민등록번호 유효성 검사를 반복적으로 수행 함*/
	{
		if (availabilityCheck(resident_number[i]) == TRUE)
		{
			printf("(+) 주민번호%s는(은) 유효한 번호입니다.\n", resident_number[i]);
		}
		else
		{
			printf("(-) 주민번호%s는(은) 유효하지 않은 번호입니다.\n", resident_number[i]);
		}
	}
	return 0;
}
/*----------------------------------------------------------------
availabilityCheck()함수: 주민등록번호 유효성 검사 함수
전달인자: 유효성 검사할 주민등록번호(문자열)
리턴값: 유효하면TRUE, 유효하지 않으면FALSE 리턴
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
checkLengthCharacter()함수: 주민등록번호 길이 및 문자 유효성검사 함수
전달인자: 검사할 주민등록번호(문자열)
리턴값: 주민등록번호의 길이가 맞고 숫자문자로만 구성되어 있으면TRUE,
길이가 짧거나 길고, 숫자 문자가 아닌 문자가 섞여 있으면FALSE 리턴
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
checkDate()함수: 첫6자리(연,월,일)의 유효성 검사 함수
전달인자: 유효성 검사할 주민등록번호(문자열)
리턴값: 유효한 날짜이면TRUE, 유효하지 않은 날짜이면FALSE 리턴
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
checkGender()함수: 7번째 자리의 성별식별번호 유효성 검사함수
전달인자: 유효성 검사할 주민등록번호(문자열)
리턴값: 성별식별번호가'1'~'4'이면TRUE, 그 외 숫자 문자이면FALSE 리턴
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
checkIdentification()함수: 주민등록번호 끝자리(인식자) 유효성 검사 함수
전달인자: 유효성 검사할 주민등록번호(문자열)
리턴값: 유효한 인식자이면TRUE, 유효하지 않은 인식자이면 FALSE 리턴
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
checkYear ()함수: 년도의 윤,평년 여부 검사
전달인자: 윤,평년 검사할 년도
리턴값: 윤년이면 TRUE, 평년이면FALSE 리턴
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
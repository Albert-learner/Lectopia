/*수강생 : 이재빈 HW20*/
#include <stdio.h>

int input_hour();
int calc_glPay(int hour);
int tax(int glPay);
void output(int glPay, int glTax, int netPay);

int main()
{
	int week_hour, gl_pay, taxes, net_pay;
	printf("(입출력양식)\n");
	week_hour = input_hour();
	gl_pay = calc_glPay(week_hour);
	taxes = tax(gl_pay);
	net_pay = gl_pay - taxes;

	output(gl_pay, taxes, net_pay);
	return 0;
}

int input_hour()
{
	int hour;
	printf("*1주일간의 근무시간을 입력하시오 : ");
	scanf("%d", &hour);

	return hour;
}

int calc_glPay(int hour)
{
	int fund_pay, add_pay, gloss_pay;
	if (hour > 40)
	{
		fund_pay = 40 * 3000;
		hour -= 40;
		add_pay = hour * 3000 * 1.5;
		gloss_pay = fund_pay + add_pay;
	}
	else
	{
		gloss_pay = hour * 3000;
	}
	return gloss_pay;
}

int tax(int glPay)
{
	int glTax;
	
	if (glPay <= 100000)
		glTax = glPay * 0.15;
	else
	{
		glTax = 100000 * 0.15;
		glPay -= 100000;
		glTax += glPay * 0.25;
	}
	return glTax;
}

void output(int glPay, int glTax, int netPay)
{
	printf("# 총수입 : %d원\n", glPay);
	printf("# 세 금 :   %d원\n", glTax);
	printf("# 실수입 : %d원\n", netPay);
}
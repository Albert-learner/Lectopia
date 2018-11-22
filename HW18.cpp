/*작성자 : 이재빈 HW18*/
#include <stdio.h>

int input_age();
int input_num();
void print(int age, int num);

int main()
{
	int guest_age, guest_num;
	int i;
	for (i = 0; i < 2; i++)
	{
		printf("(실행 예%d)\n", i + 1);
		guest_age = input_age();
		guest_num = input_num();
		printf("\n\n");

		print(guest_age, guest_num);
	}
	printf("\n\n");
	return 0;
}

int input_age()
{
	int age;
	printf("입장객의 나이를 입력하시오 : ");
	scanf("%d", &age);
	return age;
}

int input_num()
{
	int num;
	printf("입장객의 수를 입력하시오 : ");
	scanf("%d", &num);
	return num;
}

void print(int age, int num)
{
	int adm_fee, dis_fee, pay_fee;

	if (age <= 7)
		adm_fee = 500;
	else if (age <= 13)
		adm_fee = 700;
	else if (age <= 19)
		adm_fee = 1000;
	else if (age <= 55)
		adm_fee = 1500;
	else if (age >= 56)
		adm_fee = 500;
	else
		adm_fee = 0;

	if (num >= 5)
	{
		dis_fee = (adm_fee*num)*0.1;
	}
	else
		dis_fee = 0;

	pay_fee = adm_fee * num - dis_fee;

	printf("입장료 => %d원\n", adm_fee*num);
	printf("할인 금액 => %d원\n", dis_fee);
	printf("결제 금액 => %d원\n", pay_fee);
	printf("\n\n");
}
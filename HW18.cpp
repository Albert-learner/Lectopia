/*�ۼ��� : ����� HW18*/
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
		printf("(���� ��%d)\n", i + 1);
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
	printf("���尴�� ���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);
	return age;
}

int input_num()
{
	int num;
	printf("���尴�� ���� �Է��Ͻÿ� : ");
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

	printf("����� => %d��\n", adm_fee*num);
	printf("���� �ݾ� => %d��\n", dis_fee);
	printf("���� �ݾ� => %d��\n", pay_fee);
	printf("\n\n");
}
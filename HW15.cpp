/*�ۼ��� : ����� HW15*/
#include <stdio.h>

int input_weight();
double input_height();
double bmi_cal(int weight, double height);
void result(double cost);

int main()
{
	int weight;
	double height, cost;
	printf("(����� ��)\n");
	weight = input_weight();
	height = input_height();

	cost=bmi_cal(weight, height);
	result(cost);
	return 0;
}

int input_weight()
{
	int wei;
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%d", &wei);
	return wei;
}

double input_height()
{
	double hei;
	printf("Ű�� �Է��ϼ���(m) : ");
	scanf("%lf", &hei);
	return hei;
}

double bmi_cal(int weight, double height)
{
	double cost;
	cost = weight / (height*height);
	return cost;
}

void result(double cost)
{
	if (cost < 18.5)
		printf("����� BMI�� %0.1lf���� ��ü���Դϴ�.\n", cost);
	else if (cost < 25.0)
		printf("����� BMI�� %0.1lf���� ����ü���Դϴ�.\n", cost);
	else if(cost<30.0)
		printf("����� BMI�� %0.1lf���� ��ü���Դϴ�.\n", cost);
	else if(cost<40.0)
		printf("����� BMI�� %0.1lf���� ���Դϴ�.\n", cost);
	else
		printf("����� BMI�� %0.1lf���� �����Դϴ�.\n", cost);
}
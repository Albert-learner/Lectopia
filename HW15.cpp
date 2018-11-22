/*작성자 : 이재빈 HW15*/
#include <stdio.h>

int input_weight();
double input_height();
double bmi_cal(int weight, double height);
void result(double cost);

int main()
{
	int weight;
	double height, cost;
	printf("(입출력 예)\n");
	weight = input_weight();
	height = input_height();

	cost=bmi_cal(weight, height);
	result(cost);
	return 0;
}

int input_weight()
{
	int wei;
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%d", &wei);
	return wei;
}

double input_height()
{
	double hei;
	printf("키를 입력하세요(m) : ");
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
		printf("당신의 BMI는 %0.1lf으로 저체중입니다.\n", cost);
	else if (cost < 25.0)
		printf("당신의 BMI는 %0.1lf으로 정상체중입니다.\n", cost);
	else if(cost<30.0)
		printf("당신의 BMI는 %0.1lf으로 과체중입니다.\n", cost);
	else if(cost<40.0)
		printf("당신의 BMI는 %0.1lf으로 비만입니다.\n", cost);
	else
		printf("당신의 BMI는 %0.1lf으로 고도비만입니다.\n", cost);
}